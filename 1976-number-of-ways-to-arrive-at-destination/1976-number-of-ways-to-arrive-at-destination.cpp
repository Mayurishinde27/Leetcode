#define ll long long

class Solution {
    
    int mod = 1e9+7;
public:
    int countPaths(int n, vector<vector<int>>& roads)
    {
        vector<pair<ll,ll>> adj[n];
        ll end = n - 1;
        int start = 0;
        for(auto x: roads)
        {
            adj[x[0]].push_back({x[1],x[2]});   
            adj[x[1]].push_back({x[0],x[2]});   
        }

        priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;  // {time, node}
        pq.push({0,start});
                
        vector<ll> dist(n, 1e18);
        dist[start] = 0;
        
        vector<ll> ways(n,0);
        ways[start] = 1;
        
        
        int count = 0;
        while(!pq.empty())
        {
            ll time = pq.top().first;
            ll node = pq.top().second;
            pq.pop();

            for(auto x: adj[node])
            {
                auto adjNode = x.first;
                auto adjWt = x.second;
                
                if(time + adjWt < dist[adjNode])
                {
                    dist[adjNode] = time + adjWt;
                    pq.push({dist[adjNode], adjNode});
                    ways[adjNode] = ways[node];
                }
                
                else if(time + adjWt == dist[adjNode])
                {
                     ways[adjNode] = (ways[adjNode]+ ways[node]) % mod;
                }
            }
        }
        
        return ways[end] % mod;
        
    }
};