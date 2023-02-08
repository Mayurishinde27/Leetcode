class Solution {
public:
    int jump(vector<int>& nums)
    {
        int count = 0;
        int result = 0;
        int maxi = INT_MIN;
        int n = nums.size();
        for(int i = 0; i< nums.size(); i++)
        {
            int val = nums[i] + i;
            maxi = max(maxi,val);
            if(i == count && count != n-1)
            {
                result++;
                count = maxi;
            }
        }
        return result;
    
    }
};