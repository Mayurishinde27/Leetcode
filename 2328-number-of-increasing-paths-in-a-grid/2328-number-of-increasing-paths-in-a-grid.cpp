class Solution {
    int mod = 1000000007;
    int dfs(int row, int col,vector<vector<int>>& dp, vector<vector<int>>& grid,int n, int m)
    {
        if(dp[row][col] != -1)
        {
            return dp[row][col];
        }
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        int count = 1;
        
        for(int i = 0; i<4; i++)
        {
            int r = row + delrow[i];
            int c = col + delcol[i];
            
            if(r>=0 && c>=0 && r<n && c<m && grid[r][c] > grid[row][col])
            {
                count = (count % mod + dfs(r,c,dp,grid,n,m) % mod) % mod;
            }
        }
        return dp[row][col] = count;        
    }
public:
    int countPaths(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        int ans = 0;
        
        vector<vector<int>> dp(n,vector<int> (m,-1));
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(dp[i][j] == -1)
                {
                    dfs(i,j,dp,grid,n,m);
                }
            }
        }
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                ans = (ans % mod + dp[i][j] % mod) % mod;
            }
        }
        return ans;
    }
};