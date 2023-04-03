class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int n = nums.size();
        int res = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        // return target's index if it is present in an array else n;
        
        if(res != n && nums[res] == target)
        {
            return res;
        }
        return -1;
        
    }
};