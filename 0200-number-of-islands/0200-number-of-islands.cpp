class Solution {
public:
    int n,m;
    void dfs(int row,int col,vector<vector<char>>&ans)
    {
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        ans[row][col] = '0';
        
        for(int i = 0; i<4; i++)
        {
            int r = row + delrow[i];
            int c = col + delcol[i];
            if(r>=0 && c>=0 && r<n && c<m && ans[r][c] == '1')
            {
                dfs(r,c,ans);
            }
        }
        
    }
    int numIslands(vector<vector<char>>& grid)
    {

        n = grid.size();
        m = grid[0].size();
        int count = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(grid[i][j] == '1')
                {
                    count++;
                    dfs(i,j,grid);
                }
            }
        }
        return count;
    }
};