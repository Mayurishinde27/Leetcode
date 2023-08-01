class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat)
    {
        int count = 0;
        
        int n = mat.size();
        int m = mat[0].size();
        
        int maxi = INT_MIN;
        vector<int> ans;
        int row = 0;
        for(int i = 0; i<n; i++)
        {
            count = 0;
            for(int j = 0; j<m; j++)
            {
                if(mat[i][j] == 1)
                {
                    count++;
                }
            }
            if(maxi < count)
            {
                maxi = count;
                row = i;
            }
        }
        
        ans.push_back(row);
        ans.push_back(maxi);
        
        return ans;
    }
};