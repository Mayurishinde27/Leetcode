class Solution {
public:
    int check(int l , int r, vector<vector<int>>&dp, vector<int>&piles, vector<int> &v)
    {
        if(l == piles.size())
        {
            return 0;
        }
        
        if(l+2*r >= piles.size())
        {
            return v[l];
        }
        
        if(dp[l][r] != -1)
        {
            return dp[l][r];
        }
        
        int maxi = 0;
        for(int i = 1; i<= 2*r; i++)
        {
            int val = v[l] - check(l+i,max(r,i),dp,piles,v);
            maxi = max(maxi,val);
        }
        
        return dp[l][r] = maxi;
        
    }
    int stoneGameII(vector<int>& piles) 
    {
        int n = piles.size();
        vector<vector<int>> dp(piles.size()+1,vector<int>(n+1,-1));
        vector<int>v(n);
        v[n-1] = piles[n-1];
        
        for(int i = n-2; i>=0; i--)
        {
            v[i] = piles[i] + v[i+1];
        }
        
        int ans = check(0,1,dp,piles,v);
        return ans;

    }
};