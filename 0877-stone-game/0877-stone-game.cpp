class Solution {
public:
    int dfs(int l, int r, vector<vector<int>> &dp,vector<int> piles)
    {
        int even , left, right;
        if(l > r)
        {
            return 0;
        }
        
        if(dp[l][r] != -1)
        {
            return dp[l][r];
        }
        
        if((r-l) % 2 == 0)
        {
            even = 1;
        }
        else
        {
            even = 0;
        }
        
        if(even)
        {
            left = piles[l];
            right = piles[r];
        }
        else
        {
            left = 0;
            right = 0;
        }
        
        int l_val = dfs(l+1,r,dp,piles) + left;
        int r_val = dfs(l,r-1,dp,piles) + right;
        
        dp[l][r] = max(l_val, r_val);
        
        return dp[l][r];
  
    }
    bool stoneGame(vector<int>& piles)
    {
        int n= piles.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
        int l = 0;
        int r = piles.size()-1;
        int ans = dfs(l,r,dp,piles);
        return ans;

    }
};