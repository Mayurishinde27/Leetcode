class Solution {
public:

    double new21Game(int n, int k, int maxPts)
    {
        vector<double> dp(n+1,0);
        double window_sum = 0;
        
        if(k == 0 ||  n >= k + maxPts)
        {
            return 1.0;
        }

        for(int i = k; i<=n; i++)
        {
            dp[i] = 1.0;
            window_sum++;
        }

        for(int i = k-1; i>= 0; i--)
        {
            dp[i] = (double) window_sum/maxPts;
            double del = 0;
            if(i + maxPts <= n)
            {
                del = dp[i + maxPts];
            }
            // else if(i + maxPts <= n)
            // {
            //     del = 1.0;
            // }
            window_sum += dp[i] - del;
        }
        

        return dp[0];
    }
};