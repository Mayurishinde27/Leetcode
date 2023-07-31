class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int small = matrix[0][0];
        int large = matrix[n-1][m-1];
        
        if(target > large || target < small) return false;
        
        int i = 0;
        int j = m-1;
        
        while(i < n && j >=0)
        {
            if(matrix[i][j] == target)
            {
                return true;
            }
            
            if(matrix[i][j] < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        
        return false;
    }
};