class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        set<int> st;
        for(int i = 0; i<nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        int idx = 0;
        for(auto x: st)
        {
            nums[idx] = x;
            idx++;
        }
        
        return st.size();
        
    }
};