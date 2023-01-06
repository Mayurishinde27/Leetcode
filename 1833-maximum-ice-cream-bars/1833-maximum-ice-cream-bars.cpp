class Solution {
public:
    int maxIceCream(vector<int>& cost, int coin)
    {
        sort(cost.begin(), cost.end());
        // 1,1,2,3,4
        long long int sum = 0;
        long long int count = 0;
        
        for(int i = 0; i<cost.size(); i++)
        {
            sum += cost[i];
            if(sum<= coin)
            {
                count++;
            }
        }
        return count;
        
    }
};