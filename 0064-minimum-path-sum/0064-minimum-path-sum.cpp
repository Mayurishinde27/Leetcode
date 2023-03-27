class Solution {
public:
//      int check(int i,int j,vector<vector<int>>& grid)
//      {
//          if(i == 0 && j == 0)
//          {
//              return grid[i][j];
//          }
//          if(i<0 || j<0)
//          {
//              return 1e8;
//          }
//          int up = check(i-1,j,grid)+grid[i][j];
//          int left = check(i,j-1,grid)+grid[i][j];
         
        
//          return min(up,left);
//      }
    int check(int i,int j,vector<vector<int>>& grid, vector<vector<int>>& dp)
    {
         if(i == 0 && j == 0)
         {
             return grid[i][j];
         }
         if(i<0 || j<0)
         {
             return 1e8;
         }
         if(dp[i][j] != -1)
         {
             return dp[i][j];
         }
         int up = check(i-1,j,grid,dp)+grid[i][j];
         int left = check(i,j-1,grid,dp)+grid[i][j];
         
         dp[i][j] = min(up,left);
         return dp[i][j];
    }
    
    int minPathSum(vector<vector<int>>& grid)
    {
        int maxr = grid.size();
        int maxc = grid[0].size();
        vector<vector<int>> dp(maxr,vector<int>(maxc,-1));
        // vector<int> v;
    
        return check(maxr-1,maxc-1,grid,dp);
        // return check(0,0,grid,dp,v);
    }
};