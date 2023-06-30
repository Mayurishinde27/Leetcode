class Solution {
    
    int bfs(int row, int col, vector<vector<int>>& cells, int mid)
    {
        vector<vector<int>> grid(row, vector<int>(col,0));
        
        for(int i = 0; i<mid; i++)
        {
            grid[cells[i][0] - 1][cells[i][1] - 1] = 1;
        }
        
        queue<pair<int,int>> q;  //{row,col}
        
        for(int j = 0; j<col; j++)
        {
            if(grid[0][j] == 0){
                q.push({0,j});
                grid[0][j] = 1;
            }
        }
        
        
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        while(!q.empty())
        {
            int nrow = q.front().first;
            int ncol = q.front().second;
            
            q.pop();
            
            if(nrow == row - 1)
            {
                return 1;
            }
            for(int i = 0; i<4; i++)
            {
                int r = nrow + delrow[i];
                int c = ncol + delcol[i];
                
                if(r >=0 && c >=0 && r<row && c<col && !grid[r][c])
                {
                    q.push({r,c});
                    grid[r][c] = 1;
                }
            }
        }
        return 0;
    }
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells)
    {
        int i = 1;
        int j = cells.size();
        int ans = 0;
        while(i <= j)
        {
            int mid = i + (j-i) / 2;
            
            if(bfs(row, col, cells, mid))
            {
                ans = mid;
                i = mid + 1;
            }
            else
                j = mid - 1;
        }
        return ans;
        
    }
};