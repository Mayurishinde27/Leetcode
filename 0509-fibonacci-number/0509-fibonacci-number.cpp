class Solution {
public:
    // using memoization 
    
    int f(int n, vector<int> &dp)
    {
        // base case
        if(n <= 1) return n;
        
        // check if dp[n] is previously calculated or not
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = f(n-1,dp) + f(n-2,dp);
    }
    
    int fib(int n) {
        
        vector<int> dp(n+1, -1);
        
        return f(n, dp);
        
        // TC - O(N)
        // SC - O(N) + O(N)  {recursion stack space + dp array}
        
    }
};