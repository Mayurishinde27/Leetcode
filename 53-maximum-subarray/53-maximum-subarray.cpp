class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int sum = nums[0];
        int max_sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            max_sum+=nums[i];
        
            if(sum<max_sum)
            {
                sum = max_sum;
            }
        
            if(max_sum<0)
            {
                max_sum = 0;
            }
        }
        return sum;
        
    }
};