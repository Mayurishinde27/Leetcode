class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {
        int i = 1;
        int j = nums.size()-2;
        
        int n = nums.size();
        
        if(n == 1)
        {
            return 0;
        }
        if(n == 2)
        {
            if(nums[0] > nums[1])
            {
                return 0;
            }
            else
                return 1;
        }
        while(i<=j)
        {
            int mid = i +(j-i)/2;
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])
            {
                return mid;
            }
            else if(nums[mid] < nums[mid+1])
            {
                i = mid+1;
            }
            else
            {
                j = mid - 1;
            }
            
        }
        if(nums[0] > nums[1])
        {
            return 0;
        }
        
        if(nums[n-1] > nums[n-2])
        {
            return n-1;
        }
        
        return -1;
    }
};