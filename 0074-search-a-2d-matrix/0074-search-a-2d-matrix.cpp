class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        
        if(n == 0) return false;
        
        int i = 0;
        int j = (n*m)-1;
        
        while(i <= j)
        {
            int mid = i + (j - i) /2;
            
            int row = mid / m;
            int col = mid % m;
            
            if(matrix[row][col] == target)
            {
                return true;
            }
            
            if(matrix[row][col] < target)
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
        
        return false;
        
        //TC : O(log(N x M))
    }
};