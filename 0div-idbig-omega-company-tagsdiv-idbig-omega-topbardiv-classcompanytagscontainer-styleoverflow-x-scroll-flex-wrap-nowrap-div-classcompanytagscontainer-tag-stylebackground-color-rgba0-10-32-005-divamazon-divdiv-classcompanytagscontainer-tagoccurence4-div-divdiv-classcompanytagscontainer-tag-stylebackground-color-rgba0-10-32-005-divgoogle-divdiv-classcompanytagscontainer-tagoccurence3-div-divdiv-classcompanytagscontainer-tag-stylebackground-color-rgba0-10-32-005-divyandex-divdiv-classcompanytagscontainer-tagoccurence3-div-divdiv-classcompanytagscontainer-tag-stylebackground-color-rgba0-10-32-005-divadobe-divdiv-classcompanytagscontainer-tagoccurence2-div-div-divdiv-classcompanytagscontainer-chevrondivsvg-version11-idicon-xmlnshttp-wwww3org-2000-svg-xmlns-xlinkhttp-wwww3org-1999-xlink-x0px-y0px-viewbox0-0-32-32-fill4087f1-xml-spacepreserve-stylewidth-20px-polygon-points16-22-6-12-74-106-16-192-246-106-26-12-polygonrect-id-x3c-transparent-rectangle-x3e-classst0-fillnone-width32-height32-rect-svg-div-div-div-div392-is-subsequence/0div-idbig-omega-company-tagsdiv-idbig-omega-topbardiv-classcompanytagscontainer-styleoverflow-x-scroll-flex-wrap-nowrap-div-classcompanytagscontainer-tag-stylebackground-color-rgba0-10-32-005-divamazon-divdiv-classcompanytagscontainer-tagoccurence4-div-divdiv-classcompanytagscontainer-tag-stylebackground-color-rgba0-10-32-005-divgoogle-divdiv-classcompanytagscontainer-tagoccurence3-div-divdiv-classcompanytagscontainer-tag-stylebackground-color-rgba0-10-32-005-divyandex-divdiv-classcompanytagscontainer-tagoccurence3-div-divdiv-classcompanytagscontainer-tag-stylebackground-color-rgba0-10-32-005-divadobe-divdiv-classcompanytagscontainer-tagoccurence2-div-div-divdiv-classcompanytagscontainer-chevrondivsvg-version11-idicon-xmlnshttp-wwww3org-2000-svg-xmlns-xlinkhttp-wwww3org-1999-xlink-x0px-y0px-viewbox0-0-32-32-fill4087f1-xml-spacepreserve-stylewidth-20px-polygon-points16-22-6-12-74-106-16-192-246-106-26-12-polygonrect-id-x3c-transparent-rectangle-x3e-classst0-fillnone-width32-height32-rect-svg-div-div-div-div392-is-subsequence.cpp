class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int x = 0;
        int i = 0;
        while(i<t.size())
        {
            if(t[i] == s[x])
            {
                x++;
                i++;
            }
            else 
                i++;
        }
        
        return x == s.size();
    }
};