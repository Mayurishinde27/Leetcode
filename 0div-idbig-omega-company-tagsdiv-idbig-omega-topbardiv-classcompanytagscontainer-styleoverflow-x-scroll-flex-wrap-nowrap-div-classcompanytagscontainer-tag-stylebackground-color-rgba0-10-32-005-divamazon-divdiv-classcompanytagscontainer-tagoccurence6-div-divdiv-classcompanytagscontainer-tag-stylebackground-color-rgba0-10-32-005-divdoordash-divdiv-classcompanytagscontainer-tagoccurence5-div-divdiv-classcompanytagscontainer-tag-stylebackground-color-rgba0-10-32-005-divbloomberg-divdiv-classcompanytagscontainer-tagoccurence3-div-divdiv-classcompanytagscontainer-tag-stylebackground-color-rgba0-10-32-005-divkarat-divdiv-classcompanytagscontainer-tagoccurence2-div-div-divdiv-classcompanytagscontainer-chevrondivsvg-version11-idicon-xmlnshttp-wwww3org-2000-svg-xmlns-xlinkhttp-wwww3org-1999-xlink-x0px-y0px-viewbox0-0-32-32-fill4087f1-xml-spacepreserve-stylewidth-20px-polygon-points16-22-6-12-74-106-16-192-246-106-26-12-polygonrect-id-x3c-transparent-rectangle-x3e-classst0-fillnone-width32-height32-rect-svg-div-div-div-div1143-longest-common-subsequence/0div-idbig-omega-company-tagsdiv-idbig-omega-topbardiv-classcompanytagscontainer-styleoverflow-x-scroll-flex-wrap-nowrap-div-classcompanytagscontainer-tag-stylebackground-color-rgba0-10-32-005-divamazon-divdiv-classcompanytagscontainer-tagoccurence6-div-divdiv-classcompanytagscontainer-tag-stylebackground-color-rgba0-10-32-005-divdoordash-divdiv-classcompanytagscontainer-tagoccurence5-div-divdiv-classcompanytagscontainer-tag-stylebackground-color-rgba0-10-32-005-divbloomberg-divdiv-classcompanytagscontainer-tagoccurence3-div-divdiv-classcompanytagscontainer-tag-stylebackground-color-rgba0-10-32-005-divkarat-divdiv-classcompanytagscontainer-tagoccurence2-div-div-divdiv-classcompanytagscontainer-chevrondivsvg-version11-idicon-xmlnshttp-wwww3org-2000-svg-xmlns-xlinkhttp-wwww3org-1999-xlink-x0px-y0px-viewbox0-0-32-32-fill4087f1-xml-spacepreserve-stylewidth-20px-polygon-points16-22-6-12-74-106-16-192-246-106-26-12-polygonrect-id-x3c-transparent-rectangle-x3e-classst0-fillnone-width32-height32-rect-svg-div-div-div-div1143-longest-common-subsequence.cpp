class Solution {
public:
    int longestCommonSubsequence(string s1, string s2)
    {
        int n = s1.size();
        int m = s2.size();
        // vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        vector<int> prev(m+1,0);
        vector<int> curr(m+1,0);
        
        for(int i = 0; i<=n; i++)
        {
            prev[0] = 0;
        }
        for(int i = 0; i<=m; i++)
        {
            prev[i] = 0;
        }
        
        for(int idx1 = 1; idx1<=n; idx1++)
        {
            for(int idx2 = 1; idx2<=m; idx2++)
            {
                if(s1[idx1-1] == s2[idx2-1])
                {
                   curr[idx2] = 1 + prev[idx2-1];
                }
                else{
                    curr[idx2] = max(prev[idx2],curr[idx2-1]);
                }
            }
            prev = curr;
        }
        
        return prev[m];
        
    }
};