class Solution {
public:
    int maxProductDifference(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        // 2 4 5 6 7
        int n = nums.size() - 1;
        int pro1, pro2;
        
        pro1 = nums[0] * nums[1];
        pro2 = nums[n] * nums[n - 1];
        
        int diff = pro2 - pro1;
        return diff;
        
    }
};