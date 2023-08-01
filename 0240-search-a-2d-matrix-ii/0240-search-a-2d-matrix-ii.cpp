class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int i = 0;
        int j = m-1;
        
        int small = matrix[0][0];
        int large = matrix[n-1][m-1];
        
        if(target < small || target > large) return false;
        while(i < n && j >=0)
        {
            if(matrix[i][j] == target)
            {
                return true;
            }
            else if(matrix[i][j] > target)
            {
                j --;
            }
            else
            {
                i++;
            }
        }
        return false;
        
    }
};