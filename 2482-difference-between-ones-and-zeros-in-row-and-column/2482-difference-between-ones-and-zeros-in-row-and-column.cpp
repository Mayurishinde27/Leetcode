class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& mat)
    {

        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> diff(n,vector<int>(m,0));
        
        vector<int> oneRow(n);
        vector<int> oneCol(m);
        vector<int> zeroRow(n);
        vector<int> zeroCol(m);
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(mat[i][j] == 1)
                {
                    oneRow[i]++;
                    oneCol[j]++;
                }
                else
                {
                    zeroRow[i]++;
                    zeroCol[j]++;
                }
            }
        }
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                diff[i][j] = oneRow[i] + oneCol[j] - zeroRow[i] - zeroCol[j];
            }
        }
        return diff;
    }
};