class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n = nums.size();
        int left[n];
        int right[n];
        vector<int> v(n);
        
        left[0] = 1;
        for(int i = 1; i<n; i++)
        {
            left[i] = left[i - 1] * nums[i - 1]; // 1,1,2,6
            
        }
        right[n-1] = 1;
        for(int i = n-2; i>= 0; i--)
        {
            right[i] = right[i + 1] * nums[i + 1]; // 24,12,4,1
        }
        
        for(int i = 0; i<n; i++)
        {
            v[i] = left[i] * right[i]; // 24,12,8,6
            
        }
        return v;
        
    }
};