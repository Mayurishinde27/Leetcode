class Solution {
    
    double solve(int row, int col, int poured, vector<vector<double>>&dp)
    {
        if(row < 0 || col < 0 || col > row) return 0.00;
        
        if(row == 0 && col == 0) return poured;
        
        if(dp[row][col] != -1) return dp[row][col];
        
        double left = (solve(row-1,col-1,poured,dp) - 1 ) / 2;
        
        if(left < 0) left = 0;
        
        double right = (solve(row-1,col,poured,dp) - 1 ) / 2;
        
        if(right < 0) right = 0;
        
        return dp[row][col] = left + right;
    }
public:
    double champagneTower(int poured, int query_row, int query_glass)
    {
        vector<vector<double>> dp(query_row+1,vector<double>(query_glass+1,-1));
        double ans = min(1.0,solve(query_row,query_glass,poured,dp));
        return ans;
    }
};