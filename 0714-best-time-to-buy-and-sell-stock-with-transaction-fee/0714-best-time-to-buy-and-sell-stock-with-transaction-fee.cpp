class Solution {
public:
    int maxProfit(vector<int>& prices, int fee)
    {
        int maxi = INT_MIN;
        int profit = 0;
        
        for(int i = 0; i<prices.size(); i++)
        {
            maxi = max(maxi, profit - prices[i]);
            
            profit = max(profit, maxi + prices[i] - fee);
        }
        return profit;
    }
};