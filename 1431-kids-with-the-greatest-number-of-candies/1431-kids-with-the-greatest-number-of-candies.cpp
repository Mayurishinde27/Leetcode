class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        vector<bool> v;
        int maxi = INT_MIN;
        for(int i = 0; i<candies.size(); i++)
        {
            maxi = max(candies[i],maxi);

        }
        int sum;
        for(int i = 0; i<candies.size() ; i++)
        {
            sum = 0;
            sum += candies[i] + extraCandies;
            if(sum >= maxi)
            {
                v.push_back(true);
            }
            else
            {
                v.push_back(false);
            }
            
        }
        return v;
        
    }
};