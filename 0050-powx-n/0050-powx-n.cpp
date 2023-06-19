class Solution {
public:
    double myPow(double x, int n)
    {
        if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        if(n == 0)
        {
            return 1;
        }
        if(n < 0)
        {
            return 1/(myPow(x,abs(n)-1)*x);
        }
        return myPow(x,n-1)*x;
    }
};


