class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k)
    {
        priority_queue<int> q;
        //the first element will be the maximum of all elements in the queue, and elements are in decreasing order
        int maxr = matrix.size();
        int maxc = matrix[0].size();

        for(int i= 0; i<maxr; i++)
        {
            for(int j=0; j<maxc; j++)
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