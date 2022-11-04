class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix)
    {
        int maxr = matrix.size() - 1;
        int maxc = matrix[0].size() - 1;
        
        for(int i = 0; i< maxr; i++)
        {
            for(int j = 0; j<maxc; j++)
            {
                if(matrix[i][j] != matrix[i+1][j+1])
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};