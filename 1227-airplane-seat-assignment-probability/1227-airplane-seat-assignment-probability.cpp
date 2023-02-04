class Solution {
public:
    double nthPersonGetsNthSeat(int n)
    {
        double p = 1.0000;
        if(n <= 1)
        {
            return p;
        }

        return p/2;
        
        
    }
};