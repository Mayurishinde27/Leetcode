class Solution {
public:
    
    vector<vector<int>> v;
    
    void permutation(vector<int> &nums, int l, int r)
    {
        
        if(l==r)
        {
            v.push_back(nums);
            return ;
        }

            for(int i=l; i<=r; i++)
            {
                swap(nums[i],nums[l]);
                permutation(nums,l+1,r);
                swap(nums[i],nums[l]);
            }
        
    }
    vector<vector<int>> permute(vector<int>& nums)
    {
        int n = nums.size() - 1;
        permutation(nums,0,n);
        return v;
    }
};