class Solution {
public:
    bool findSubarrays(vector<int>& nums)
    {
        // unordered_map<int,bool> mp;
        unordered_set<int> st;
        
        for(int i = 0; i<nums.size()-1; i++)
        {
            int val = nums[i]+nums[i+1];
            if(st.count(val)){
                return true;
            }
            st.insert(val);
        }
        return false;
    }
};