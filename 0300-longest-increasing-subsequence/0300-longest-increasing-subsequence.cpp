class Solution {
public:
    int lengthOfLIS(vector<int>& nums)
    {
        vector<int> v;
        v.push_back(nums[0]);
        
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] > v.back())
            {
                v.push_back(nums[i]);
            }
            else
            {
                int idx = lower_bound(v.begin(),v.end(),nums[i]) - v.begin();
                v[idx] = nums[i];
            }
        }
        int ans = v.size();
        return ans;
    }
};