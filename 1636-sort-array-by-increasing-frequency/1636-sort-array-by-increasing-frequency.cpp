class Solution {
    
    class cmp{
        public:
        bool operator()(pair<int,int> &p1, pair<int,int>&p2)
        {
            if(p1.first == p2.first)
            {
                return p1.second < p2.second;
            }
            return p1.first > p2.first;
        }
    };
    
public:
    vector<int> frequencySort(vector<int>& nums)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>, cmp> pq;
        unordered_map<int,int> mp;
        
        for(auto x:nums)
        {
            mp[x]++;
        }
        
        for(auto x: mp)
        {
            pq.push({x.second,x.first});
        }
        
        vector<int> ans;
        
        while(!pq.empty())
        {
            for(int i = 0; i<pq.top().first; i++)
            {
                ans.push_back(pq.top().second);
            }
                
//             while(pq.top().first != 0)
//             {
//                 ans.push_back(pq.top().second);
//                 pq.top().first--;
//             }
            pq.pop();
        }
        return ans;
        
    }
};