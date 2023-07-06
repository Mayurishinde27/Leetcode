class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int left = 0;
        int sum = 0;
        int ans = 1e9;
        int n = nums.size();

        for(int right = 0; right < n; right++)
        {
            sum += nums[right];
            
            while(sum >= target)
            {
                sum -= nums[left];
                ans = min(ans, right-left+1);
                left++;
            }
        
            // if(sum >= target)
            // {
            //      ans = min(ans, right-left+1);
            // }
        }
        return ans == 1e9 ? 0 : ans;
        // return ans;
    }
};