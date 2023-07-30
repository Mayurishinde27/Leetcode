class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums)
    {
        int n = nums.size();
        int max_so_far = nums[0];
        int maxi = nums[0];
        
        int min_so_far = nums[0];
        int mini = nums[0];
        
        for(int i = 1; i<n; i++)
        {
            max_so_far = max(nums[i], max_so_far + nums[i]);
            maxi = max(maxi,max_so_far);
            
            min_so_far = min(nums[i], min_so_far + nums[i]);
            mini = min(mini,min_so_far);
            
        }
        
        return max(abs(maxi),abs(mini));
        
    }
};