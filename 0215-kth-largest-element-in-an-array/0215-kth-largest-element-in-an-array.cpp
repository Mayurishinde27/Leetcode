class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        sort(nums.begin(),nums.end());
        // 1,2,3,4,5,6 
        //1,2,2,3,3,4,5,5,6
        
        int k_large;
        int n = nums.size();
        int j = n - k; 
        
        
        k_large = nums[j];
        
        return k_large;
        
        
        
    }
};