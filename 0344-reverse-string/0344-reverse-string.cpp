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
    void reverseString(vector<char>& s)
    {
        int i = 0;
        int j = s.size()-1;
        reverse(i,j,s);
        
    }
};