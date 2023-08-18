class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads)
    {
        vector<int> adj[n];
        for(auto x: roads)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        
        int ans = 0;
        
        for(int i = 0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                int count = adj[i].size() + adj[j].size();
                
                for(auto x: adj[i])
                {
                    if(x == j){
                        count -= 1;
                        break;
                    }
                }
                
                ans = max(ans,count);
            }
        }
        
        return ans;
    }
};