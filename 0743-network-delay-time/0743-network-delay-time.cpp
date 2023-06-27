class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<pair<int,int>> adj[n+1];
        vector<int> dis(n+1, 1e9);
        for(auto x: times)
        {
            adj[x[0]].push_back({x[1],x[2]});
        }
        
        dis[k] = 0;
        priority_queue<pair<int,int>> pq;
        pq.push({0,k}); // {time,node}

        while(!pq.empty()){
            int time = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto x: adj[node])
            {
                int adjNode = x.first;
                int adjWeight = x.second;
                
                if(time + adjWeight < dis[adjNode])
                {
                    dis[adjNode] = time + adjWeight;
                    pq.push({dis[adjNode],adjNode});                    
                }
            }
        }
        
        int result = INT_MIN;
        for(int i = 1; i<=n; i++){
            if(dis[i] == 1e9){
                return -1;
            }
            
            result = max(result, dis[i]);
        }
        
        return result;
    }
};