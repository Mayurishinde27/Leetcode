class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        // by using Dutch National flag algorithm 
        
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;
        
        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0:
                    swap(nums[low],nums[mid]);
                    mid++;
                    low++;
                    break;
                    
                case 1:
                    mid++;
                    break;
                    
                case 2:
                    swap(nums[mid],nums[high]);
                    high--;
                    break;
                    
            }
        }
        
    }
};