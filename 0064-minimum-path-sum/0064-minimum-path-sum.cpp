class Solution {
public:
    int minPathSum(vector<vector<int>>& grid)
    {
        int maxr = grid.size();
        int maxc = grid[0].size();
        vector<vector<int>> sum(maxr+1,vector<int>(maxc+1,INT_MAX));
        sum[0][1] = 0;
        // sum.resize(maxr+1,vector<int>(maxc+1,grid[0][0]));
        
        for(int i = 1; i<=maxr; i++)
        {
            for(int j = 1; j<=maxc; j++)
            {
                sum[i][j] = min(sum[i-1][j],sum[i][j-1])+grid[i-1][j-1];
            }
        }
        
        return sum[maxr][maxc];
        //return res;
        
    }
};