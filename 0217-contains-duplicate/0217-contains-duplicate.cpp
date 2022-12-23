class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int> m;
        
        for(auto x:nums)
        {
            if(m.count(x) > 0 )
            {
                return true;
            }
            m.insert(x);
         }
        return false;
    }
};