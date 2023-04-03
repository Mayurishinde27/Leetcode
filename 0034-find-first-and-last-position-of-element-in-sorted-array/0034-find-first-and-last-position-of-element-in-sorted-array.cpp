class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int> v;
        
        // for first occurrence of target element
        int first = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        
        if(first < nums.size() && nums[first] == target)
        {
            v.push_back(first);
        }
        else
        {
            v.push_back(-1);
        }
        
        // for last occurrence of target element
        int last = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        last --;
        
        if(last>= 0 && nums[last] == target)
        {
            v.push_back(last);
        }
        else
        {
            v.push_back(-1);
        }
        
        return v;
        
        
    }
};