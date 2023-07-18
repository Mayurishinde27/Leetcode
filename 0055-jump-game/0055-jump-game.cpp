class Solution {
    
    bool f(int idx, vector<int>& nums,int n,vector<int>&dp)
    {
        if(idx == n) return true;
        int maxi = idx + nums[idx];
        
        if(dp[idx] != -1) return dp[idx];
        // if(nums[idx] == 0 && idx != n) return 0;
        // int maxi = 0;
        for(int i = idx+1; i<=maxi; i++)
        {
            if(f(i,nums,n,dp) == true){
                return dp[i] = true;
            }
        }
        
        return dp[idx] = false;
    }
public:
    bool canJump(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> dp(n,-1);
        return f(0,nums,n-1,dp);
        
    }
};