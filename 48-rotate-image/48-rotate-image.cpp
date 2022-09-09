class Solution {
public:

    void rotate(vector<vector<int>>& matrix)
    {
        int maxr = matrix.size();
        //int maxc = matrix[0].size();
        for(int i = 0; i<maxr; i++)
        {
            for(int j = 0; j<i; j++)
            {
                //matrix[j][i] = matrix[i][j];
                swap(matrix[i][j],matrix[j][i]);
            }
            //swap(matrix[i][j],matrix[maxr][maxc]);
        }
        for(int i=0; i<maxr; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        // for(int i = maxr - 1; i>=0; i--)
        // {
        //     for(int j = maxc - 1; j>=0; j--)
        //     {
        //         matrix[j][i] = matrix[i][j];
        //     }
        // }
//         int i = 0; int j = 0;
//         while(i<maxr && j < maxc)
//         {
//             swap(matrix[i][j],matrix[maxr][maxc]);
            
//             matrix[j][i] = matrix[i][j];
//         }
        
//         for(int i = 0; i<maxr; i++)
//         {
//             for(int j = 0; j<maxc; j++)
//             {
//                 swap(matrix[i][j],matrix[maxr-i-1][maxc-j-1]);
//             }
            
//         }
    }
};