class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k)
    {
        vector<pair<int,int>> adj[n];
        
        for(auto x: flights)
        {
            adj[x[0]].push_back({x[1],x[2]});
        }
        
        vector<int> dist(n+1, 1e9);
        dist[src] = 0;
        
        queue<pair<int,pair<int,int>>> q;  // {stope,{node,distance}}
        q.push({0,{src,0}});
        
        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            int stope = it.first;
            int node = it.second.first;
            int dis = it.second.second;
            
            if(stope > k) continue;
            
            for(auto x: adj[node])
            {
                int adjNode = x.first;
                int adjWeight = x.second;
                
                if(dis + adjWeight < dist[adjNode] && stope <= k)
                {
                    dist[adjNode] = dis + adjWeight;
                    q.push({stope+1,{adjNode,dist[adjNode]}});                    
                }
            }
        }
        
        if(dist[dst] == 1e9) return -1;
        return dist[dst];
    }
};