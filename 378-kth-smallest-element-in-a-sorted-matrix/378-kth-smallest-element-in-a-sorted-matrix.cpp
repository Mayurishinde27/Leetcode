class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k)
    {
        priority_queue<int> q;
        for(int i= 0; i<matrix[0].size(); i++)
        {
            for(int j=0; j<matrix.size(); j++)
            {
                q.push(matrix[i][j]);
                if(q.size()>k)
                {
                    q.pop();
                }
            }
        }
        return q.top();

    }
};