class Solution {
public:
    int minMoves(vector<int>& nums)
    {
        
        int min_ele = *min_element(nums.begin(),nums.end());
        int sum = 0;
        
        for(int i = 0; i<nums.size(); i++)
        {
            sum += (nums[i] - min_ele);
        }
        return sum;
    }
};