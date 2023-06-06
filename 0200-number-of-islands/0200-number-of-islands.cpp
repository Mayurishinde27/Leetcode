class Solution {
public:
    
    void dfs(int row,int col,vector<vector<char>>&ans)
    {
        int n = ans.size();
        int m = ans[0].size();
        if(row < 0 || row >= n || col <0 || col >= m || ans[row][col] == '0')
        {
            return;
        }
        ans[row][col] = '0';
        dfs(row+1,col,ans);
        dfs(row,col+1,ans);
        dfs(row-1,col,ans);
        dfs(row,col-1,ans);
        
        
    }
    int numIslands(vector<vector<char>>& grid)
    {

        int n = grid.size();
        int m = grid[0].size();
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