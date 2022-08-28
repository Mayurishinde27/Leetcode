class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int maxr = matrix.size();
        int maxc = matrix[0].size();
        int col = 1;
        
        for(int i = 0; i < maxr; i++)
        {
            if(matrix[i][0]==0)
            {
                col = 0;
            }
            for(int j = 1; j < maxc; j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
                
            }
        }
        
        for(int i = maxr - 1; i >= 0; i--)
        {
            for(int j = maxc - 1; j >= 1; j--)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
            if(col == 0)
            {
                matrix[i][0] = 0;
            }
        }
        
        
    }
};