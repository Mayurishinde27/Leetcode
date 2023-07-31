class Solution {
    vector<vector<int>> ans;
    
    void permute(int idx,vector<int>&nums,int n)
    {
        if(idx == n)
        {
            ans.push_back(nums);
            return;
        }
        
        // take 
        for(int i = idx; i< n; i++)
        {
            swap(nums[idx],nums[i]);
            permute(idx+1,nums,n);
            swap(nums[idx],nums[i]);
        }
        
    }
public:
    vector<vector<int>> permute(vector<int>& nums)
    {
        int n = nums.size();
        permute(0,nums,n);
        return ans;
    }
};