class Solution {
public:
    
    void dfs(int row, int col,vector<vector<int>> image,vector<vector<int>>& ans,int delRow[],int delCol[],int color,int inColor)
    {
        ans[row][col] = color;
        int n = image.size();
        int m = image[0].size();
        
        for(int i = 0; i<4; i++)
        {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];
            
            if(nRow >= 0 && nRow <n && nCol>=0 && nCol<m && image[nRow][nCol] == inColor && ans[nRow][nCol] != color)
            {
                dfs(nRow,nCol,image,ans,delRow,delCol,color,inColor);
            }
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        int inColor = image[sr][sc];
        
        vector<vector<int>> ans = image;
        
        int delRow[] = {-1,0,+1,0};
        int delCol[] = {0,+1,0,-1};
        
        dfs(sr,sc,image,ans,delRow,delCol,color,inColor);
        return ans;
        // TC = O(N x M)
        // SC = O(N x M)
    }
};