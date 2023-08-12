class Solution {
    int mod = 1e9+7;
    int solve(int row, int col,int path, vector<vector<int>>& grid, int k,vector<vector<vector<int>>>&dp)
    {
        if(row < 0 || col < 0){
            return 0;
        }
        if(row == 0 && col == 0) return (path + grid[row][col]) % k == 0;
        
        if(dp[row][col][path]  != -1) return dp[row][col][path];
        
        int left = solve(row, col-1,(path + grid[row][col]) % k,  grid, k,dp);
        int up = solve(row-1, col,(path + grid[row][col]) % k, grid, k,dp);
        
        
        return dp[row][col][path] = (left+up) % mod;
        
    }
public:
    int numberOfPaths(vector<vector<int>>& grid, int k)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(k,-1)));
        
        return solve(n-1,m-1,0,grid,k,dp);
    
    }
};