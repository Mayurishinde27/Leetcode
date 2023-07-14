class Solution {
public:
//     int f(int n, vector<int> &dp)
//     {
            //memoization
//         if(n == 0) return 1;
//         if(n == 1) return 1;
        
//         if(dp[n] != -1) return dp[n];
        
//         int left = f(n-1,dp);
//         int right = f(n-2,dp);
        
//         return dp[n] = left + right;
        
//     }
    int climbStairs(int n)
    {
        // tabulation
        if(n == 0) return 1;
        if(n == 1) return 1;
        vector<int> dp(n+1, -1);
        
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i = 2; i<=n; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
 
    }
};