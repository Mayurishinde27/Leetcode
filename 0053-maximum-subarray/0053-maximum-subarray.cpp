class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int n = nums.size();
        int max_so_far = nums[0];
        int maxi = nums[0];
        
        for(int i = 1; i<n; i++)
        {
            max_so_far = max(nums[i],max_so_far + nums[i]);
            maxi = max(maxi,max_so_far);
        }
        return maxi;
        
    }
};