class Solution {
public:
    int reverse(int i,int j, vector<char> &s)
    {
        if( i >= j/2)
        {
            return 1;
        }
        if(s[i] != s[j-i-1])
        {
            return false;
        }
        return reverse(i+1,j,s);
    }
    bool isPalindrome(int x)
    {
        string str = to_string(x);
        vector<char> v;
        
        for(int i = 0; i<str.size(); i++)
        {
            v.push_back(str[i]);
        }
        int i = 0; 
        int j = str.size();
        return reverse(i,j,v);
        
    }
};