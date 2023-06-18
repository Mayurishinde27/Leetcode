class Solution {
    
    bool dfs(int node, vector<int> &vis,vector<int> &pathvis,vector<vector<int>>&graph)
    {
        vis[node] = 1;
        pathvis[node] = 1;

        for(auto x: graph[node])
        {
            if(!vis[x])
            {
                if(dfs(x,vis,pathvis,graph) == true)
                {
                    return true;
                }
            }
            else if(pathvis[x] == 1)
            {
                return true;
            }
        }
        pathvis[node] = 0;
        return false;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph)
    {
        int n = graph.size();
        int m = graph[0].size();
        
        vector<int> vis(n,0);
        vector<int> pathvis(n,0);
        vector<int> safeState;
        
        for(int i = 0; i<n; i++)
        {
            if(vis[i] == 0)
            {
                dfs(i,vis,pathvis,graph);
            }
        }
        
        for(int i = 0; i<n; i++)
        {
            if(pathvis[i] == 0)
            {
                safeState.push_back(i);
            }
        }
        
        return safeState;
    }
};