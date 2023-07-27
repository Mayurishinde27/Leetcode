class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        unordered_map<int,int> m;
        vector<int> v;
        
        for(auto x: nums)
        {
            m[x]++;
        }
        
        for(auto x: m)
        {
            if(x.second == 2) v.push_back(x.first);
        }
        return v;
        
    }
};