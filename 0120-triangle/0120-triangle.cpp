class Solution {
    // space optimization
public:
    int minimumTotal(vector<vector<int>>& triangle)
    {
        int n = triangle.size();

        vector<int> front(n,0);
        vector<int> curr(n,0);
        
        // base case
        for(int i = 0; i<n; i++)
        {
            front[i] = triangle[n-1][i];
        }
        
        for(int i = n-2; i>=0; i--)
        {
            for(int j = i; j>=0; j--)
            {
                int down = triangle[i][j] + front[j];
                int dia = triangle[i][j] + front[j+1];

                curr[j] =  min(down, dia);
            }
            front = curr;
        }
        
        return front[0];
    }
};