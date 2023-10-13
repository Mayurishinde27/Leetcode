class Solution {
    
    void bfs(int row, int col,vector<vector<int>>& matrix,vector<vector<int>>& vis)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        
        
        //for column wise
        for(int i = 0; i<n; i++)
        {
            if(matrix[i][col] != 0)
            {
                vis[i][col] = 1;
                matrix[i][col] = 0;
            }
        }
        
        // for row wise
        for(int j = 0; j<m; j++)
        {
            if(matrix[row][j] != 0)
            {
                vis[row][j] = 1;
                matrix[row][j] = 0;
            }
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        
        queue<pair<int,int>> q;
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++)
            {
                if(matrix[i][j] == 0 && !vis[i][j])
                {
                    bfs(i,j,matrix,vis);
                    vis[i][j] = 1;
                }
            }
        }
        
    }
};