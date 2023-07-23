class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int profit = 0;
        int maxi = INT_MAX;
        
        for(int i = 0; i<prices.size(); i++)
        {
            maxi = min(maxi, prices[i]);
            
            profit = max(profit, prices[i] - maxi);
        }
        
        return profit;
        
    }
};