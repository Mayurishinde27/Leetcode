class Solution {
public:
    int subarraySum(vector<int>& nums, int k)
    {
        map<int,int> mp;
        int sum = 0;
        int len = 0;

        for(int i = 0; i<nums.size(); i++)
        {
            sum += nums[i];
            if(sum == k){
                len++;
            }
            int rem = sum - k;
            if(mp.find(rem) != mp.end())
            {
                len += mp[rem];
            }
            mp[sum] ++;
            // if(mp.find(sum) == mp.end())
            // {
            //     mp[sum] = i;
            // }
        }
        return len;
        
    }
};