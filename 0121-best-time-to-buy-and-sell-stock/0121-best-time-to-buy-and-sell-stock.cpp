class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        int profit = 0;
        for(int i = 0; i<prices.size()-1; i++)
        {
            minimum = min(minimum,prices[i]); // 7 1
            profit = min(profit,minimum-prices[i+1]); // 0,1-5 = 6 
            
            
        }
        return (profit)*(-1);
        
    }
};