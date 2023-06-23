class Solution {
public:
    int longestArithSeqLength(vector<int>& nums)
    {
        int n = nums.size();
        if(n <= 2) return n;
        
        unordered_map<int,int> dp[n+1]; // to store AP->diff
        int ans = 0;
        
        for(int i = 1; i<n; i++)
        {
            for(int j = 0; j<i; j++)
            {
                int diff = nums[i] - nums[j];
                int cnt = 1;
                
                // check if answer is already present in the dp
                if(dp[j].count(diff))
                {
                    cnt =  dp[j][diff];
                }
                
                dp[i][diff] = cnt + 1;
                
                ans = max(ans, dp[i][diff]);

            }
        }
        return ans;
        
    }
};