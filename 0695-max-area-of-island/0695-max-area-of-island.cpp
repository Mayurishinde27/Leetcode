class Solution {
public:
    
    void dfs(int row, int col, vector<vector<int>>&grid,vector<vector<int>> &vis,int & count)
    {
        int n = grid.size();
        int m = grid[0].size();
        count++;
        grid[row][col] = 0;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        for(int i = 0; i<4; i++)
        {
            int r = row + delrow[i];
            int c = col + delcol[i];
            
            if(r>=0 && c>=0 && r<n && c<m && grid[r][c] == 1)
            {
                dfs(r,c,grid,vis,count);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int count;
        int maxi = 0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(grid[i][j] == 1)
                {
                    count = 0;
                    dfs(i,j,grid,vis,count);
                    
                    maxi = max(maxi,count);
                }
            }
        }
        return maxi;
        
    }
};