class Solution {
public:
    
    int calc(int n)
    {
        int sum = 0;
        while(n)
        {
            int rem = n % 10;
            sum += rem;
            n = n /10;
        }
        
        return sum;
    }
    
    int differenceOfSum(vector<int>& nums)
    {
        
        int ele_sum = 0;
        int dig_sum = 0;
        int ans = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            ele_sum += nums[i];
            dig_sum += calc(nums[i]);   
        }
        
        ans = abs(ele_sum - dig_sum);
        
        return ans;
        
        
    }
};