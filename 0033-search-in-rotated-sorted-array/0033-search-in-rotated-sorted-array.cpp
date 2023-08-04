class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int n = nums.size();
        
        int low = 0;
        int high = n - 1;
        
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == target){
                return mid;
            }
            
            // left part sorted
            if(nums[low] <= nums[mid])
            {
                // checking if the target element is exist in the left range or not
                if(target >= nums[low] && target < nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            
            // right part sorted
            else
            {
                // checking if the target element is exist in the right range or not
                if(target >= nums[mid] && target <= nums[high])
                {
                    low = mid;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
        
        // TC: O(logN)
        
    }
};