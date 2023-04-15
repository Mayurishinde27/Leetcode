class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int,int> m;
        vector<int> v;
        for(auto x:nums)
        {
            m[x]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto x:m)
        {
            pq.push({x.second,x.first});
        }
        
        while(k)
        {
            v.push_back(pq.top().second);
            pq.pop();
            k--;
        }

        return v;
        
    }
};