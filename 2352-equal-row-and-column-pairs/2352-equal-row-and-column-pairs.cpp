class Solution {
public:
    int equalPairs(vector<vector<int>>& grid)
    {
        map<vector<int>,int> mp;
    
        int n = grid.size();
        int m = grid[0].size();
        
        int res = 0;
        
        for(int i = 0; i<n; i++)
        {
            mp[grid[i]]++;
        }
        for(int j = 0; j<m; j++)
        {
            vector<int> v;
            for(int i = 0; i<n; i++)
            {
                v.push_back(grid[i][j]);
            }
            
            res += mp[v];
        }
        return res;
    }
};