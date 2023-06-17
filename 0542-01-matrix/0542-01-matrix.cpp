class Solution {
public:
    
    // bfs(int r, int c,vector<vector<int>>&vis, vector<vector<int>>& dis, vector<vector<int>>& mat )
    // {
    //     queue<pair<int,int>
    // }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>> distance(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(mat[i][j] == 0)
                {
                    q.push({{i,j},0});
                }
            }
        }
        
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int dis = q.front().second;
        
            q.pop();
            
            distance[row][col] = dis;
            for(int i = 0; i<4; i++)
            {
                int r = row + delrow[i];
                int c = col + delcol[i];
                
                if(r>=0 && c>=0 && r<n && c<m && mat[r][c] == 1 && !vis[r][c])
                {
                    vis[r][c] = 1;
                    q.push({{r,c},dis+1});
                }
            }
        }
        return distance;
    }
};