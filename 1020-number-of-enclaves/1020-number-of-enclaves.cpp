class Solution {
public:
    
    

    int numEnclaves(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        int count = 0;
        
        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,+1,0,-1};
        
        queue<pair<int,int>> q;
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(i == 0 || i == n-1 || j == 0 || j == m-1 )
                {
                    if(grid[i][j] == 1)
                    {
                        // dfs(i,j,grid,vis);
                        q.push({i,j});
                        vis[i][j] = 1;
                    }
                    
                }
            }
        }
        
        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int i = 0; i<4; i++)
            {
                int r = row + delrow[i];
                int c = col + delcol[i];

                if(r>=0 && c>=0 && r<n && c<m && grid[r][c] == 1 && !vis[r][c])
                {
                    vis[r][c] = 1;
                    q.push({r,c});
                    // dfs(r,c,grid,vis);
                }
            }
            
        }
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(grid[i][j] == 1 && !vis[i][j])
                {
                    count++;
                }
            }
        }
        
        return count;
        
    }
};