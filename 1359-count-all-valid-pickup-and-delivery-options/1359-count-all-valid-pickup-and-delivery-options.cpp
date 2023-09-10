class Solution {
    int mod = 1e9+7;
public:
    
    long long int f(int n)
    {
        if(n == 1) return 1;
         return (long long)((n*2)-1) * ((long long)countOrders(n-1)*n) % mod;
    }
    int countOrders(int n)
    {
        // if(n == 1) return 1;
        return f(n);
        
//         long long int previous = 1;
//         long long int ans = 1;
        
//         for(auto i = 2; i<=n; i++)
//         {
//             ans = (((i*2)-1) * previous*i) % mod;
//             previous = ans;
//         }
        
//         return ans;
        // return (long long)((n*2)-1) * (countOrders(n-1)*n) % mod;
    }
};

// n - 1
// n = 2  ((2*2)-1) * 1*2  = 6
// n = 3  ((3*2) - 1) * 6 * 3

// ((n*2)-1) * (f(n-1)*n)