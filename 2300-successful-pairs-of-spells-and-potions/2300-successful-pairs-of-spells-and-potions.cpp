class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success)
    {
        vector<int>v;
        sort(potions.begin(),potions.end());
        long long min;
        int count;
        for(int i = 0; i<spells.size(); i++)
        {
            
            min = success / spells[i];
            
            if(success % spells[i])
            {
                min++;
            }
            count = lower_bound(potions.begin(),potions.end(),min) - potions.begin();
            int ans = potions.size()-count;
            v.push_back(ans);
        }

        return v;

        
    }
};