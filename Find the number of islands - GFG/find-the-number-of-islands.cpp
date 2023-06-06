//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    
        void dfs(int row,int col,vector<vector<char>> grid,vector<vector<int>>& vis)
    {
        vis[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
        for(int delRow = -1; delRow<=1; delRow++)
        {
            for(int delCol = -1; delCol<=1; delCol++){
                int nRow = row + delRow;
                int nCol = col + delCol;
                
                if(nRow >= 0 && nRow <n && nCol>=0 && nCol<m && grid[nRow][nCol] == '1' && vis[nRow][nCol] == 0)
                {
                    vis[nRow][nCol] = 1;
                    dfs(nRow,nCol,grid,vis);
                }
            }
        }
            
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));
        int count = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(vis[i][j] == 0 && grid[i][j] == '1')
                {
                    dfs(i,j,grid,vis);
                    count++;
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends