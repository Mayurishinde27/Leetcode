class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        map<int,int> m;
        
        for(auto x:nums)
        {
            m[x]++;
        }
        for(auto x:m)
        {
            if(x.second<2)
            {
                return x.first;
            }
        }
        return -1;
        
    }
};