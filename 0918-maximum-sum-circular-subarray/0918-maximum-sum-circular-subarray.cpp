class Solution {
    
    int kadens(vector<int>&nums, int n)
    {
        int max_sum = 0;
        int sum = INT_MIN;
        
        for(int i = 0; i<n; i++)
        {
            max_sum += nums[i];
            
            sum = max(sum,max_sum); //-2
            
            if(max_sum < 0)
            {
                max_sum = 0;
            }
        }
        return sum;
    }
public:
    int maxSubarraySumCircular(vector<int>& nums)
    {
        int n = nums.size();
        int non_wrapsum = kadens(nums,n);
        
        int TotalSum = 0;
        
        for(int i = 0; i <n; i++)
        {
            TotalSum += nums[i];   //-8
            nums[i] = - nums[i];
        }
        
        int wrapsum = TotalSum + kadens(nums,n);
        
        if(wrapsum == 0) return non_wrapsum;
        
        return max(wrapsum,non_wrapsum);

    }
};