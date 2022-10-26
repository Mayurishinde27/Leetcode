class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        unordered_map<int,int> m1,m2;
        vector<int> v;
        
        for(auto x:arr)
        {
            m1[x]++;
        }
        for(auto x:m1)
        {
            v.push_back(x.second);
        }
        for(auto x:v)
        {
            m2[x]++;
        }
        for(auto x:m2)
        {
            if(x.second>1)
            {
                return false;
            }
        }
        return true;
        
        
    }
};