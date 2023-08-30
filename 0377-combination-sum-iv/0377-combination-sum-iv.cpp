class Solution {
    
    int solve(int n, vector<int> &nums,int target,vector<int>&dp)
    {
        if(target == 0)
        {
            return 1;
        }
        if(dp[target] != -1) return dp[target];
        int count = 0;
        
        for(int i = 0; i<n; i++)
        {
            if(nums[i] <= target)
            {
                count += solve(n, nums, target-nums[i],dp);
            }
        }
        dp[target] = count;
        return count;
    }
public:
    int combinationSum4(vector<int>& nums, int target)
    {
        int n = nums.size();
        vector<int> dp(target+1,-1);
        return solve(n,nums,target,dp);
        
    }
};