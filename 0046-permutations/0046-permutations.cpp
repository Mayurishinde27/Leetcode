class Solution {
public:
    
    vector<vector<int>> v;
    
    void permutation(int l, int r,vector<int> nums)
    {
        
        if(l==r)
        {
            v.push_back(nums);
            return ;
        }
        
            for(int i=l; i<=r; i++)
            {
                swap(nums[i],nums[l]);
                permutation(l+1,r,nums);
                swap(nums[i],nums[l]);
            }
        
    }
    vector<vector<int>> permute(vector<int>& nums)
    {
        int n = nums.size() - 1;
        permutation(0,n,nums);
        return v;
    }
};