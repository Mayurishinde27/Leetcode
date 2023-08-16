class Solution {
public:
    int getSum(int a, int b)
    {
        if(a == 0) return b;
        if(b == 0) return a;
        
        else return getSum((a & b) << 1 ,a ^ b);
        
    }
};