class Solution {
public:
    void reverse(int i,int j, vector<char> &s)
    {
        if( i >= j)
        {
            return;
        }
        swap(s[i],s[j]);
        reverse(i+1,j-1,s);
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
        int j = str.size()-1;
        reverse(i,j,v);
        
        string after = "";
        
        for(int i = 0; i<str.size(); i++)
        {
            after += v[i];
        }
        
        if(str == after)
        {
            return true;
        }
        return false;
        
    }
};