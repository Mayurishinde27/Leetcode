class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix)
    {
        int maxr = matrix.size();
        int maxc = matrix[0].size();
        vector<vector<int>> v;
        for(int i = 0; i<maxc; i++)
        {
            vector<int> vec;
            for(int j = 0; j<maxr; j++)
            {
                vec.push_back(matrix[j][i]);
            }
            v.push_back(vec);
        }
        return v;
    }
};