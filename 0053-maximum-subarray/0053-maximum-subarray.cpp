class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        
        // kadane's algorithm 
        
        int n = nums.size();
        int max_sum = 0;
        int maxi = INT_MIN;
        
        for(int i = 0; i<n; i++)
        {
            max_sum += nums[i];
            
            if(maxi < max_sum)
            {
                maxi = max_sum;
            }
            
            if(max_sum < 0)
            {
                max_sum = 0;
            }
            
            // maxi = max(maxi,max_sum);
        }
        return maxi;
        
//         int n = nums.size();
//         int max_so_far = nums[0];
//         int maxi = nums[0];
        
//         for(int i = 1; i<n; i++)
//         {
//             max_so_far = max(nums[i],max_so_far + nums[i]);
//             maxi = max(maxi,max_so_far);
//         }
//         return maxi;
        
    }
};