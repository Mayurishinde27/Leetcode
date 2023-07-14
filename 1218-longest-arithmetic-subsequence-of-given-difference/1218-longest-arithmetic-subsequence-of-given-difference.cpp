class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference)
    {
        int n = arr.size();
        if(n <= 2)
        {
            return 1;
        }
        unordered_map<int,int> dp;
        int ans = 0;
        
        for(int i = 0; i<n; i++)
        {
            int num = arr[i];
            
            if(dp.find(num - difference) != dp.end())
            {
                dp[num] = dp[num - difference] + 1;
            }
            else
                dp[num] = 1;
            
            ans = max(ans,dp[num]);
        }
        return ans;
        
//         for(int i = 1; i<n; i++)
//         {
//             for(int j = 0; j<i; j++)
//             {
//                 int c = 1;
//                 if(dp[j].count(difference))
//                 {
//                     c = dp[j][difference];
//                 }
                
//                 dp[i][difference] = c + 1;
//                 ans = max(ans,dp[i][difference]);
//             }
//         }
//         return ans;
    }
};