class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int> v;
        int i = 0;
        while(i<nums.size())
        {
            v.push_back(nums[i]*nums[i]);
            i++;
            
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};