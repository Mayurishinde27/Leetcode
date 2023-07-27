class Solution {
    
//     int f(int row, int col,vector<vector<int>>& matrix,int n,vector<vector<int>>&dp)
//     {   
//         if(col < 0 || col > n) return 1e9;
        
//         if(row == 0) return matrix[0][col];
        
//         if(dp[row][col] != -1) return dp[row][col];
        
//         int left = matrix[row][col] + f(row-1,col-1,matrix,n,dp);
        
//         int right = matrix[row][col] + f(row-1,col+1,matrix,n,dp);
        
//         int dia = matrix[row][col] + f(row-1,col,matrix,n,dp);
        
//         return dp[row][col] = min(dia,min(left,right));
//     }
public:
    int minFallingPathSum(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        
//         int ans = INT_MAX;
//         for(int i = 0; i<n; i++)
//         {
//             int val = f(n-1,i,matrix,n-1,dp);
//             ans = min(ans,val);
//         }
//         return ans;
        
        for(int i = 0; i<n; i++)
        {
            dp[0][i] = matrix[0][i];
        }
        
        for(int row = 1; row <n; row ++)
        {
            for(int col = 0; col <m; col++)
            {
                int left = matrix[row][col];
                if(col-1 >= 0){
                    left += dp[row-1][col-1];
                }
                else{
                    left += 1e8;
                }

                int right = matrix[row][col];
                if(col + 1 < m) {
                    right += dp[row-1][col+1];
                }
                else{
                    right += 1e8;
                }


                int dia = matrix[row][col] + dp[row-1][col];
    

                dp[row][col] = min(dia,min(left,right));
            }
        }
        
        int ans = INT_MAX;
        for(int i = 0; i<m; i++)
        {
            int val = dp[n-1][i];
            ans = min(ans,val);
        }
        return ans;
    }
};