class Solution {
public:
    
    void dfs(int node, vector<vector<int>> graph, vector<vector<int>> &ans, vector<int>&path,int n)
    {
        path.push_back(node);
        
        if(node == n)
        {
            ans.push_back(path);
        }
        else
        {
            for(auto x: graph[node])
            {
                dfs(x,graph,ans,path,n);
            }
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph)
    {
        vector<vector<int>> ans;
        vector<int> path;
        int n = graph.size()-1;
        dfs(0,graph,ans,path,n);
        
        return ans;
    }
};