class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k)
    {
        int n = nums.size();
        if (n < 2) return false;
        
        unordered_map<int,int> mp;
        mp[0] = -1;
        
        int curr = 0;
        for(int i = 0; i<n; i++)
        {
            curr += nums[i];
            curr = curr % k;
            if(mp.find(curr) != mp.end()){
                if(i - mp[curr] >= 2){
                    return true;
                }
            }
            else{
                mp[curr] = i;
            }
        }

        return false;
    }
};
