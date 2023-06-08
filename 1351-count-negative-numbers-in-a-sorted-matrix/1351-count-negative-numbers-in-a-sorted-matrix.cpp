class Solution {
public:
    int countNegatives(vector<vector<int>>& grid)
    {
        int count = 0;
        int n = grid.size();
        int i = 0;
        int j = grid[0].size()-1;
        
        while(i>=0 && i<n && j>=0)
        {
            if(grid[i][j] < 0)
            {
                count += (n-i);
                j--;
            }
            else
                i++;
            
        }
        return count;
    }
    
    
};