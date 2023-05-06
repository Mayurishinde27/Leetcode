class Solution {
    int mod=1000000007;
public:
    int numSubseq(vector<int>& nums, int target)
    {
        sort(nums.begin(),nums.end());
        int count = 0;
        int i = 0;
        int j = nums.size()-1;
        
        vector<int> v(nums.size()+1,1);
        
        for(int i = 1; i<=nums.size(); i++)
        {
            v[i] = (2*v[i-1]) % mod;
        }
        
        while(i<=j)
        {
            if(nums[i] + nums[j] <= target)
            {
                count = (count +v[j-i]) % mod;
                i++;
                
            }
            else
                j--;

        }
        return count;
        
    }
};