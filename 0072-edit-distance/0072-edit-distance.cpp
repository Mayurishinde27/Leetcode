class Solution {
public:
    int minDistance(string word1, string word2)
    {
        int s = word1.size();
        int d = word2.size();
        
        vector<vector<int>> dp(d+1,vector<int>(s+1,0));
        
        int n = dp.size();
        int m = dp[0].size();
        
        for(int i = 0; i<m; i++)
        {
            dp[0][i] = i;
        }
        for(int j = 0; j<n; j++)
        {
            dp[j][0] = j;
        }
        for(int row = 1; row < n; row++)
        {
            for(int col = 1; col < m; col++)
            {
                if(word1[col-1] == word2[row-1]){
                    dp[row][col] = dp[row-1][col-1];
                }else{
                    dp[row][col] = min(min(dp[row-1][col-1],dp[row-1][col]),(dp[row][col-1])) + 1;
                }
            }
        }
        return dp[n-1][m-1];
    }
};