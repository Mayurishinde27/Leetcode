class Solution {
    
    int solve(vector<int>&nums,vector<int>&prev,int n)
    {
        if(n == 1){
            return prev[0];
        }
        vector<int> curr;
        for(int i = 0; i<n-1; i++)
        {
            int val = prev[i] + prev[i+1];
            if(val > 9){
                val = val % 10;
            }
            curr.push_back(val);
        }
        prev = curr;
        
        return solve(nums,prev,n-1);
        
        
    }
public:
    int triangularSum(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> temp,curr;
        for(auto x: nums) temp.push_back(x);
        return solve(curr,temp, n);
        
    }
};