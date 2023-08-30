class Solution {
    
    int solve(vector<int> &nums,int target,vector<int>&dp)
    {
        if(target == 0)
        {
            return 1;
        }
        if(dp[target] != -1) return dp[target];
        
        int count = 0;
        
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] <= target)
            {
                count += solve(nums, target-nums[i],dp);
            }
        }
        dp[target] = count;
        return count;
    }
public:
    int combinationSum4(vector<int>& nums, int target)
    {
        vector<int> dp(target+1,-1);
        return solve(nums,target,dp);
        
    }
};