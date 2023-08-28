class Solution {
    // int checkPower(int n)
    // {
    //     return n & (n-1);
    // }
public:
    int countPairs(vector<int>& nums)
    {
        int mod = 1e9+7;
        int count = 0;
        vector<int> power;
        unordered_map<int,int> mp;
        for(int i = 0; i<=21; i++)
        {
            power.push_back(pow(2,i));
            
        }
        
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j = 0; j<power.size(); j++)
            {
                if(mp.find(power[j] - nums[i]) != mp.end())
                {
                    count = (count + mp[power[j] - nums[i]]) % mod;
                }
                // int val = nums[i] + nums[j];
                // if(checkPower(val) == 0)
                // {
                //     count++;
                // }
            }
            mp[nums[i]]++;
        }
        return count%mod;
        
    }
};