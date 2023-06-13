class Solution {
    
    bool dfs(int start, int col, vector<vector<int>> graph, vector<int> & color)
    {
        color[start] = col;
        
        for(auto x: graph[start])
        {
            if(color[x] == -1)
            {
                if(dfs(x,!col, graph, color) == false)
                {
                    return false;
                }
            }
            else if(color[x] == col)
            {
                return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph)
    {
        int n = graph.size();
        vector<int> color(n,-1);
        
        for(int i = 0; i<n; i++)
        {
            if(color[i] == -1)
            {
                if(dfs(i,0,graph,color) == false)
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};