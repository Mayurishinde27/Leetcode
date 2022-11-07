class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat)
    {
        int maxr = mat.size();
        int maxc = mat[0].size();
        int sum = 0;
        
        for(int i = 0 , j = i; i<maxr; i++,j++)
        {
            sum += mat[i][j]; 

        }

        int i = 0;
            for(int j = maxc - 1 - i; j>=0; j--)
            {
                sum += mat[i][j]; // m[0][2] 
                if(i == j)
                {
                    sum -= mat[i][j];
                }
                i++;
            }
        
        return sum;
        
    }
};