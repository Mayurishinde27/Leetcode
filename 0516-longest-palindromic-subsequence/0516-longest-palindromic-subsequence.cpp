class Solution {
    int longestCommonSubsequence(string s1, string s2)
    {
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        
        for(int i = 0; i<=n; i++)
        {
            dp[i][0] = 0;
        }
        for(int i = 0; i<=m; i++)
        {
            dp[0][i] = 0;
        }
        
        for(int idx1 = 1; idx1<=n; idx1++)
        {
            for(int idx2 = 1; idx2<=m; idx2++)
            {
                if(s1[idx1-1] == s2[idx2-1])
                {
                   dp[idx1][idx2] = 1 + dp[idx1-1][idx2-1];
                }
                else{
                    dp[idx1][idx2] =  max(dp[idx1-1][idx2],dp[idx1][idx2-1]);
                }
            }
        }
        
        return dp[n][m];
    }
public:
    int longestPalindromeSubseq(string s1)
    {
        string s2 = s1;
        reverse(s2.begin(),s2.end());
        int ans = longestCommonSubsequence(s1,s2);
        return ans;
    }
};