class Solution {
public:
    
    void dfs(int node,vector<int>& vis,vector<int> adj[])
    {
        vis[node] = 1;
        for(auto x:adj[node])
        {
            if(vis[x] == 0)
            {
                dfs(x,vis,adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected)
    {
        int n = isConnected.size();
        vector<int> vis(n,0);
        vector<int> adj[n];
        
        
        // adjacancy matrix to list
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(isConnected[i][j] == 1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        int count = 0;
        
        for(int i = 0; i<n; i++)
        {
            if(vis[i] == 0)
            {
                dfs(i,vis,adj);
                count++;
            }
        }
        
        return count;
        
        
    }
};
