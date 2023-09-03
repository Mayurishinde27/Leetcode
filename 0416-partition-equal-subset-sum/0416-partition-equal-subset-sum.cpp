class Solution {
    int solve(int idx, int target, vector<int>&nums,vector<vector<int>>&dp)
    {
        if(target == 0){
            return 1;
        }
        if(idx == 0)
        {
            return nums[0] == target;
        }
        
        if(dp[idx][target] != -1){
            return dp[idx][target];
        }
        int not_take = solve(idx-1,target,nums,dp);
        int take = 0;
        
        if(target >= nums[idx]){
            take = solve(idx-1,target-nums[idx],nums,dp);
        }
        
        return dp[idx][target] = take | not_take;
    }
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int total_sum = 0;
        for(auto x:nums)
        {
            total_sum += x;
        }
        
        if(total_sum % 2) return false;
        
        int target = total_sum / 2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(n-1,target,nums,dp);
    }
};