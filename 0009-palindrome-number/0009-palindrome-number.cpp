class Solution {
    int start = 0;
    
    bool solve(int idx, string str)
    {
        if(idx == str.size()) return true;
        
        return solve(idx+1,str) && str[start++] == str[idx];
    }
    
    
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        
        return solve(0,str);
    }
};