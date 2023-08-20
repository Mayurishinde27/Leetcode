class Solution {
    
    bool isPalindromeHelp(int i,int j, string str)
    {
        
        if(i >= j) return true;
        
        if(str[i] != str[j]) return false;
        
        return isPalindromeHelp(i+1,j-1,str);
    }
    
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int n = str.size()-1;
        return isPalindromeHelp(0,n,str);
    }
};