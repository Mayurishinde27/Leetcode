class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int,int> m;
        vector<int> v;
        priority_queue<pair<int,int>> pq;
        for(auto x:nums)
        {
            m[x]++;
        }
        
        for(auto x:m)
        {
            pq.push({x.second,x.first});
        }
        
        while(k--)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        return v;

    }
};