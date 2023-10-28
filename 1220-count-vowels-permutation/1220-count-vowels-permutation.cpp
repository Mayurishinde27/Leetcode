class Solution {
    int mod = 1e9+7;
public:
    int countVowelPermutation(int n) {
        
        long a = 1 , e = 1, i = 1, o = 1, u = 1,A_ , E_ ,I_ ,O_ ,U_;
        
        for(int k = 2; k <= n; k++)
        {
            A_ = e;
            E_ = (a+i)%mod;
            I_ = (a+e+o+u)%mod;
            O_ = (i+u)%mod;
            U_ = a;
            
            a = A_;
            e = E_;
            i = I_;
            o = O_;
            u = U_;
        }

        return (a+e+i+o+u)%mod;
    }
};