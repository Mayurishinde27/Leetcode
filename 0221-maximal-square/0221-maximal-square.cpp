class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans=INT_MIN;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==0 or j==0 or matrix[i][j]=='0'){
                    dp[i][j]=matrix[i][j]-'0';
                ans=max(ans,dp[i][j]);}
                else{
                    dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                    ans=max(ans,dp[i][j]);
                }
            }
        }
        
        return ans*ans;
    }
};