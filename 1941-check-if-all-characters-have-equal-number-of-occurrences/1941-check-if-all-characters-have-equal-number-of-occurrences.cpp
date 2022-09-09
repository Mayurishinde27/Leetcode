class Solution {
public:
    bool areOccurrencesEqual(string s)
    {
        map<char,int> m;
        for(auto x:s)
        {
            m[x]++;
        }
        int i = m[s[0]];
        for(auto x:m)
        { 
            if(x.second != i)
            {
                return 0;
            }
        }
        return 1;
        
    }
};