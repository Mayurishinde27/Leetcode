class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries)
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<long long > prefix_sum(n+1,0);
        for(int i = 0; i<nums.size(); i++)
        {
            prefix_sum[i+1] = prefix_sum[i] + nums[i];
        }
        
        nums.insert(nums.begin(),0);
        n++;
        
        vector<long long > v;
        
        for(auto q : queries)
        {
            long long uidx = upper_bound(nums.begin(),nums.end(),q) - nums.begin();
            long long lidx = lower_bound(nums.begin(),nums.end(),q) - nums.begin() - 1;
            
            long long ans = q * lidx - (prefix_sum[lidx] - prefix_sum[0]); 
            
            if(uidx != n)
            {
                ans += (prefix_sum[n-1] - prefix_sum[uidx-1]) - q * (n-uidx);
            }
            
            v.push_back(ans);
        }
        
        return v;
    
    }
};