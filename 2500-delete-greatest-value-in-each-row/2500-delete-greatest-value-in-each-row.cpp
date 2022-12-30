class Solution {
public:
   int deleteGreatestValue(vector<vector<int>>& grid)
   {  
       int maxr = grid.size();  
       int maxc = grid[0].size(); 
       
       int ans = 0;
       for(int i = 0; i< maxr; i++)
       {
           sort(grid[i].begin(), grid[i].end());
       }
       for(int j = 0; j< maxc; j++)
       {
           int maxi = INT_MIN;
           for(int k = 0; k< maxr; k++)
           {
               maxi = max(maxi, grid[k][j]); 
           }
           ans += maxi; 
       }
       return ans;
         
  
  
    }  
};



