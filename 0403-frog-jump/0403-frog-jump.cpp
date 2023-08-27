class Solution {
public:
    bool canCross(vector<int>& stones)
    {
        unordered_map<int,int> mp;
        int n = stones.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int i = 0; i<stones.size(); i++)
        {
            mp[stones[i]] = i;
        }
        return solve(0,1,stones,mp,dp);
    }
    
    int solve(int pos, int jump, vector<int>&stones, unordered_map<int,int>&mp,vector<vector<int>> &dp)
    {
        
        if(pos == stones.size()-1){
            return true;
        }
        int val = stones[pos] + jump;
        
        if(dp[pos][jump] != -1) return dp[pos][jump];
        
        if(pos >= stones.size() || jump <= 0 || mp.find(val) == mp.end()){
            return false;
        }
        
        return dp[pos][jump] = solve(mp[val],jump-1,stones,mp,dp) || solve(mp[val],jump,stones,mp,dp) || solve(mp[val],jump+1,stones,mp,dp);

    }
};
