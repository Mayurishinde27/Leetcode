class Solution {
public:
    vector<vector<int>> ans;
    
    void subsets(int idx,vector<int> nums, vector<int>& v, int n)
    {
        ans.push_back(v);
        for(int i = idx; i<n; i++)
        {
            if(i !=idx && nums[i] == nums[i-1])
            {
                continue;
            }
            v.push_back(nums[i]);
            subsets(i+1,nums,v,n);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int n = nums.size();
        subsets(0,nums,v,n);
        return ans;
    }
};