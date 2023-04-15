class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> v;
        unordered_map<int,int> m;
        
        for(auto x: nums)
        {
            m[x]++;
        }
        for(auto x: m)
        {
            if(x.second>(n/3))
            {
                v.push_back(x.first);
            }
        }
        return v;
        
    }
};