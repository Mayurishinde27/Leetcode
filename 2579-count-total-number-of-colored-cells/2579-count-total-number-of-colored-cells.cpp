class Solution {
    
    long long f(int n)
    {
        if(n == 1)
        {
            return 1;
        }
        if(n == 2)
        {
            return 5;
        }
        long long ans = 4*(n-1)+f(n-1);
        
        return ans;
    }
public:
    long long coloredCells(int n)
    {
        
        return f(n);
    }
};