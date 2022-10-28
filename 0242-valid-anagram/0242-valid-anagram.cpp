class Solution {
public:
    bool isAnagram(string s1, string s2)
    {
        unordered_map<char,int> m1;
        if(s1.size() != s2.size())
        {
            return false;
        }
        
        for(auto x:s1)
        {
            m1[x]++;
        }
        
        for(auto x: s2)
        {
            m1[x]--;
            if(m1[x]<0)
            {
                return false;
            }
        }
        return true;
    }
};