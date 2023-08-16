class Solution {
public:
    int countPrimes(int n) {
        vector<int> isPrime(n+10,1);
        int count = 0;
        isPrime[0] = isPrime[1] = 0;
        for(int i = 2; i<n; i++)
        {
            if(isPrime[i])
            {
                count++;
                for(int j = 2*i; j<n; j+=i)
                {
                    isPrime[j] = 0;
                }
            }
        }
        return count;
        
        
    }
};