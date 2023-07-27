class Solution {
    
//     int f(int row, int col,vector<vector<int>>& triangle,int last_row,vector<vector<int>>&dp)
//     {
//         if(row == last_row) return triangle[last_row][col];
        
//         if(dp[row][col] != -1) return dp[row][col];
        
//         int down = triangle[row][col] + f(row + 1, col, triangle, last_row, dp);
        
//         int diagonal = triangle[row][col] + f(row + 1, col + 1, triangle, last_row, dp);
        
//         return dp[row][col] = min(down, diagonal);
//     }
public:
    int minimumTotal(vector<vector<int>>& triangle)
    {
        int n = triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        // return f(0,0,triangle,n-1,dp);
        
        for(int i = n-1; i>=0; i--)
        {
            dp[n-1][i] = triangle[n-1][i];
        }
        
        for(int row = n-2; row>=0; row--)
        {
            for(int col = row; col>=0; col--)
            {
                int down = triangle[row][col] + dp[row+1][col];
                int dia = triangle[row][col] + dp[row+1][col+1];
                
                dp[row][col] = min(down,dia);
            }
        }
        
        return dp[0][0];
        
    }
};