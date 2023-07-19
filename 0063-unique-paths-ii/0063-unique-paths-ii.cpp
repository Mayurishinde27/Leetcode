class Solution {
    
    int f(int i, int j, vector<vector<int>>& grid,vector<vector<int>>&dp)
    {
        if(i == 0 && j == 0 && !grid[i][j]) return 1;
        if(i < 0 || j < 0) return 0;
        
        if(grid[i][j] == 1) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int up = f(i-1,j,grid,dp);
        int left = f(i,j-1,grid,dp);
        
        return dp[i][j] = up+left;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
    {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return f(n-1,m-1,obstacleGrid,dp);
        
    }
};