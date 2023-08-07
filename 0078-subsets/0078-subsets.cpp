class Solution {
public:
    vector<vector<int>> ans;
    void subset(int idx, vector<int> &v, vector<int> nums,int n)
    {
        if(idx == n)
        {
            ans.push_back(v);
            return;
        }
        
        // for taking the number
        v.push_back(nums[idx]);
        subset(idx+1,v,nums,n);
        // for not taking the number
        v.pop_back();
        subset(idx+1,v,nums,n);
        
    }
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<int> vec;
        int n = nums.size();
        subset(0,vec,nums,n);
        return ans;
        
    }
};