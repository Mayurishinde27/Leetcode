class Solution {
    
    
    int solve(int row, int col, int n,  int m,vector<vector<int>>& obs,vector<vector<int>>& dp)
    {
        if(row < 0 || col < 0 ||row > n || col > m) return 0;
        if(obs[row][col] == 1 ) return 0;
        if(row == n && col == m && !obs[row][col]) return 1;
        
        if(dp[row][col] != -1) return dp[row][col];
        
        int down = solve(row + 1, col, n, m,obs,dp);
        int right = solve(row, col + 1, n, m,obs,dp);
        
        return dp[row][col] = down + right;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
    {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        
        vector<vector<int>> dp(n,vector<int>(m,-1));
        
        return solve(0,0,n-1,m-1,obstacleGrid,dp);
        
    }
};