
class Solution {
public:
    
    struct cmp{
        bool operator()(pair<int,string> &a,pair<int,string> &b)
        {
            if( a.first < b.first)
            {
                return true;
            }
            else if (a.first == b.first && a.second > b.second)
            {
                return true;
            }
            return false;

        }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k)
    {
        unordered_map<string,int> m;
        vector<string> v;
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp> pq;
        
        for(auto x: words)
        {
            m[x]++;
        }
        
        for(auto x: m)
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