class Solution {
    // Boyer-Moore Majority Voting Algorithm
public:
    int majorityElement(vector<int>& nums)
    {
        int count = 0;
        int ele;
        for(int i = 0; i<nums.size(); i++)
        {
            if(count == 0)
            {
                count = 1;
                ele = nums[i];
            }
            else if(nums[i] == ele)
            {
                count++;
            }
            else{
                count--;
            }
        }
        
        int temp = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(ele == nums[i]){
                temp++;
            }
        }
        if(temp > (nums.size()/2)){
            return ele;
        }
        return -1;
        
    }
};