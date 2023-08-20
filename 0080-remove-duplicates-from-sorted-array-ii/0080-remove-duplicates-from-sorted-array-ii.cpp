class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        map<int,int> mp;
        for(auto x: nums)
        {
            mp[x]++;
        }
        int val = 0;
        int idx = 0;
        for(auto x: mp)
        {
            if(x.second<2){
                nums[idx++] = x.first;
            }
            if(x.second>=2){
                val += (x.second-2);
                nums[idx++] = x.first;
                nums[idx++] = x.first;
            }
        }
        
        return nums.size()-val;
        
    }
};