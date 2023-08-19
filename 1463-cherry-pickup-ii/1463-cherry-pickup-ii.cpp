class Solution {
    // space optimization
public:
    int cherryPickup(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> front(m, vector<int>(m,0));
        vector<vector<int>> curr(m, vector<int>(m,0));
        
        // base case
        
        for(int j1 = 0; j1<m; j1++)
        {
            for(int j2 = 0; j2<m; j2++)
            {
                if(j1 == j2) front[j1][j2] = grid[n-1][j1];
                else{
                    front[j1][j2] = grid[n-1][j1] + grid[n-1][j2];
                }
            }
        }
        
        for(int i = n-2; i>=0; i--)
        {
            for(int j1 = 0; j1<m; j1++)
            {
                for(int j2 = 0; j2<m; j2++)
                {
                    int maxi = -1e8;
                    for(int d1 = -1; d1<=1; d1++)
                    {
                        for(int d2 = -1; d2<=1; d2++)
                        {
                            int val = 0;
                            if(j1 == j2) val = grid[i][j1];
                            else{
                                val = grid[i][j1] + grid[i][j2];
                            }

                            if(j1+d1 >= 0 && j2+d2 >=0 && j1+d1 <m && j2+d2<m){
                                val += front[j1+d1][j2+d2];
                            }
                            else{
                                val += -1e8;
                            }
                            maxi = max(maxi, val);

                        }
                    }
                    
                    curr[j1][j2] = maxi;
                }
            }
            
            front = curr;
        }
        
        return front[0][m-1];
    }
};