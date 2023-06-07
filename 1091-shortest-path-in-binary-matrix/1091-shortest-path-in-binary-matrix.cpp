class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        if(grid[0][0] || grid[n-1][n-1])
        {
            return -1;
        }
        if(n == 1 and grid[0][0] == 0)
        {
            return 1;
        }
        if(n == 1 and grid[0][0] == 1)
        {
            return -1;
        }
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        queue<pair<int,int>> q;
        q.push({0,0});
        int count = 1;
        while(!q.empty())
        {
            int s = q.size();
            while(s--)
            {
                int r = q.front().first;
                int c = q.front().second;
                q.pop();

                for(int i = -1; i<=1; i++)
                {
                    for(int j = -1; j<=1; j++)
                    {
                        int row = r + i;
                        int col = c + j;

                        if(row >= 0 && col >=0 && row <n && col < m && grid[row][col] == 0 && vis[row][col] == 0)
                        {
                            if(row == n-1 && col == n-1)
                            {
                                return count+1;
                            }
                            else
                                vis[row][col] = 1;
                                q.push({row,col});
                        }
                    }
                    
                }
                
            }
            count++;
        }
        return -1;
        
    }
};