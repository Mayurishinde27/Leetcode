class Solution {
    int mod = 1e9 + 7;
public:
    int maximumProduct(vector<int>& nums, int k)
    {
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int i =0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        long long int ans = 1;
        
        while(k--)
        {
            int small = pq.top()+1;
            pq.pop();
            pq.push(small);
        }
        
        while(!pq.empty())
        {
            ans = (ans * pq.top()) % mod; 
            pq.pop();
        }
        
//         int ans = (accumulate(nums.begin(),nums.end(),1,multiplies<int>())) % mod;
        
        return ans;
    }
};