class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        // brute force
        int n = matrix.size();
        int m = matrix[0].size();
        
        // traversing on row wise
        for(int i = 0; i<n; i++)
        {
            // traversing on column wise
            for(int j = 0; j<m; j++)
            {
                if(matrix[i][j] == target){
                    return true;
                }
                
            }
        }
        
        return false;
        
        // TC: O(N*M)
        // SC : O(1)
    }
};