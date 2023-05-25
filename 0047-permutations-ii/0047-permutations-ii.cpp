class Solution {
public:
    vector<vector<int>> ans;
    set<vector<int>> st;
    
    void permutations(int l, int r, vector<int> nums)
    {
        if( l == r)
        {
            if(st.find(nums) == st.end())
            {
                st.insert(nums);
                ans.push_back(nums);
            }
            return;
        }
        
        for(int i = l; i<=r; i++)
        {
            swap(nums[i],nums[l]);
            permutations(l+1,r,nums);
            swap(nums[i],nums[l]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums)
    {
        int n = nums.size()-1;
        permutations(0,n,nums);
        return ans;
        
    }
};