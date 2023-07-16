class Solution {

    int f(int idx,int start,vector<int>&nums,vector<int>&dp)
    {

        if(idx == start) return nums[idx];
        
        if(idx < start) return 0;
        
        if(dp[idx] != -1) return dp[idx];
        
        int pick = nums[idx] + f(idx - 2,start,nums,dp);

        int notpick = 0 + f(idx - 1,start, nums,dp);

        return dp[idx] = max(pick, notpick);
    }
public:
    int rob(vector<int>& nums)
    {
        int n = nums.size();
        if(n == 1) return nums[0];
        
        vector<int> dp(n,-1);
        
//         vector<int> first,last;
//         for(int i = 0; i<n; i++)
//         {
//             if(i != 0) first.push_back(nums[i]);
            
//             if(i != n-1) last.push_back(nums[i]);
//         }
        int val1 = f(n-1,1,nums,dp);
        fill(dp.begin(),dp.end(),-1);
        int val2 = f(n-2,0,nums,dp);
        
        return max(val1,val2);
    }
};