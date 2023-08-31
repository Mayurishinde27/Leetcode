class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        // using binary search
        int n = matrix.size();
        int m = matrix[0].size();
        
        int i = 0;
        int j = m*n-1;
        
        while(i<=j)
        {
            int mid = i + (j-i)/2;
            
            int arr = matrix[mid/m][mid%m];
            if(arr == target){
                return true;
            }
            else if(arr < target)
            {
                i = mid + 1;
            }
            else{
                j = mid - 1;
            }
        }
        
        
        return false;
        
        // TC: O(log(N*M))
        // SC : O(1)
    }
};