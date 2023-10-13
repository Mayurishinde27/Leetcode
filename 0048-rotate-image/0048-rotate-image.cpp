class Solution {
public:

    void rotate(vector<vector<int>>& matrix)
    {
        int maxr = matrix.size();
        for(int i = 0; i<maxr; i++)
        {
            for(int j = 0; j<i; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0; i<maxr; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};