class Solution {
public:
    int mod = 1e9+7;
    int dfs(int start, int finish, int fuel,vector<int>& locations,vector<vector<int>> &dp)
    {
        int n = locations.size();
        int ans = 0;
        if(dp[start][fuel] != -1) return dp[start][fuel];
        
        if(start == finish) ans = 1;
        
        for(int i = 0; i<n; i++)
        {
            if(start != i){
                int remain_fuel = abs(locations[start] - locations[i]);
                if( remain_fuel <= fuel){
                    ans += dfs(i,finish,fuel - remain_fuel, locations,dp);
                    ans %= mod;
                }
            }
        }
        
        return dp[start][fuel] = ans;
    }
    int countRoutes(vector<int>& locations, int start, int finish, int fuel)
    {
        int n = locations.size();
        vector<vector<int>> dp(n, vector<int>(fuel+1,-1));
        
        int ans = dfs(start,finish,fuel,locations,dp);
        return ans;
    }
};