class Solution {
public:
    bool isPowerOfFour(int n)
    {
        if(n<=0)
        {
            return false;
        }
        if(n == 1)
        {
            return true;
        }
        else if(n%4 == 0)
        {
            return isPowerOfFour(n/4);
        }

        return false;
    }
};

// f(4) = 4
// f(16) = 4*4
// f(64) = 4*4*4

// f(64) = f(16) * f(4);




