class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int n = nums.size();
        int res = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        
        if(res != n && nums[res] == target)
        {
            return res;
        }
        return -1;
        
    }
};