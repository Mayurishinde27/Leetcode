class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold)
    {
        vector<vector<int>> dist(n,vector<int>(n,1e8));
        
        for(auto x: edges)
        {
            int u = x[0];
            int v = x[1];
            int wt = x[2];
            
            dist[u][v] = wt;
            dist[v][u] = wt;
                
        }
        
        for(int i = 0; i<n; i++) dist[i][i] = 0;
        
        for(int k = 0; k<n; k++)
        {
            for(int i = 0; i<n; i++)
            {
                for(int j = 0; j<n; j++)
                {
                    if(dist[i][k] == 1e8 || dist[k][j] == 1e8) continue;
                    
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
        
        int cityNo = -1;
        int cityCount = n;
        for(int city = 0; city<n; city++){
            int count = 0;
            for(int adjCity = 0; adjCity<n ; adjCity++)
            {
                if(dist[city][adjCity] <= distanceThreshold) count++;
            }
            
            if(count <= cityCount)
            {
                cityCount = count;
                cityNo = city;
            }
        }
        return cityNo;
        
    }
};