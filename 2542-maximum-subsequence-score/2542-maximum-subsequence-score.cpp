class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k)
    {
        vector<pair<int,int>> v;
        long long sum = 0, ans = 0;
        for(int i = 0; i<nums1.size(); i++)
        {
            v.push_back({nums2[i],nums1[i]});
        }
        
        sort(v.rbegin(),v.rend());
        priority_queue<int, vector<int>, greater<int>> minHeap; 
        
        for(auto &[n2,n1] : v)
        {
            sum += n1;
            minHeap.push(n1);
            
            if(minHeap.size() > k)
            {
                sum -= minHeap.top();
                minHeap.pop();
            }
            if(minHeap.size() == k)
            {
                ans = max(ans , sum * n2);
            }
        }
        return ans;
        
    }
};