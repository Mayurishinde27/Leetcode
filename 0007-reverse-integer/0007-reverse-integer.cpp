class Solution {
public:
    int reverse(int x)
    {
        // if( x > pow(2,31) || x < pow(-2,31)) return 0;
        long long int res = 0;
        int neg = 0;
        if(x < 0) neg = 1;
        x = abs(x);
          
        while(x>0){
            int rem = x % 10;
            res = res * 10 + rem;
            if( res >= pow(2,31) || res <= pow(-2,31)) return 0;
            x = x / 10;
        }
        if(neg == 1){
            res = res*(-1);
        }
        return res;
        
    }
};