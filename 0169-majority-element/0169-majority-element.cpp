class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        map<int,int> m;
        
        for(auto x:nums)
        {
            m[x]++;
        }
        int ans = -1;
        int max_freq = 0;
        for(auto x:m)
        {
            if(max_freq<x.second)
            {
                ans = x.first;
                max_freq = x.second;
                
            }
        }
        return ans;
        
        
    }
};