class Solution {
public:
    int alternateDigitSum(int n)
    {
        int sum = 0;
        int count = 0;
        int res;
        while(n)
        {
            int x = n % 10;
            res = res*10 + x;
            n = n / 10;
        }
        
        while(res)
        {
            int x = res % 10;
            
            if(count % 2 == 0)
            {
                sum += x;
            }
            else if(count % 2 == 1)
            {
                sum -= x;
            }
            count++;
            res = res / 10;
        }
        return sum;
    }
};