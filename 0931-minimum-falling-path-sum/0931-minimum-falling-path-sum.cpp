class Solution {
    
//     int solve(int i, int j,vector<vector<int>>& matrix,vector<vector<int>>&dp,int n)
//     {
//         if(i < 0 || j< 0 || i => n || j => n) return 1e9;
        
//         if(i == n){
//             return matrix[i][j];
//         }
        
//         if(dp[i][j] != -1) return dp[i][j];
        
//         int leftD = matrix[i][j] + solve(i+1, j-1, matrix,dp, n);
//         int rightD = matrix[i][j] + solve(i+1, j+1, matrix,dp, n);
//         int Down = matrix[i][j] + solve(i+1, j, matrix,dp, n);
        
//         return dp[i][j] =  min(Down, min(leftD,rightD));
//     }
public:
    int minFallingPathSum(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        vector<vector<int>>dp(n, vector<int> (n,-1));
        
        for(int i = 0; i<n; i++)
        {
            dp[0][i] = matrix[0][i];
        }
        
        for(int i = 1; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                int leftD = 1e9;
                if(j-1 >= 0){
                    leftD =  matrix[i][j] + dp[i-1][j-1];
                }
                
                int rightD = 1e9;
                
                if(j+1<n){
                    rightD = matrix[i][j] + dp[i-1][j+1];
                }
                int Down = matrix[i][j] +  dp[i-1][j];
                
                dp[i][j] =  min(Down, min(leftD,rightD));
            }
        }
        
        int ans = INT_MAX;
        
        for(int i = 0; i<n; i++)
        {
            ans = min(ans, dp[n-1][i]);
        }
        return ans;

    }
};