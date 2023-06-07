class Solution {
public:
    int minFlips(int a, int b, int c)
    {
        int res1 = (a | b) ^ c;  // if there is only single bit change in a number 
        
        int res2 = (a & b) & res1; // if there is 2 bits change
        
        int store = __builtin_popcount(res1) + __builtin_popcount(res2);
        return store;
        
    }
};