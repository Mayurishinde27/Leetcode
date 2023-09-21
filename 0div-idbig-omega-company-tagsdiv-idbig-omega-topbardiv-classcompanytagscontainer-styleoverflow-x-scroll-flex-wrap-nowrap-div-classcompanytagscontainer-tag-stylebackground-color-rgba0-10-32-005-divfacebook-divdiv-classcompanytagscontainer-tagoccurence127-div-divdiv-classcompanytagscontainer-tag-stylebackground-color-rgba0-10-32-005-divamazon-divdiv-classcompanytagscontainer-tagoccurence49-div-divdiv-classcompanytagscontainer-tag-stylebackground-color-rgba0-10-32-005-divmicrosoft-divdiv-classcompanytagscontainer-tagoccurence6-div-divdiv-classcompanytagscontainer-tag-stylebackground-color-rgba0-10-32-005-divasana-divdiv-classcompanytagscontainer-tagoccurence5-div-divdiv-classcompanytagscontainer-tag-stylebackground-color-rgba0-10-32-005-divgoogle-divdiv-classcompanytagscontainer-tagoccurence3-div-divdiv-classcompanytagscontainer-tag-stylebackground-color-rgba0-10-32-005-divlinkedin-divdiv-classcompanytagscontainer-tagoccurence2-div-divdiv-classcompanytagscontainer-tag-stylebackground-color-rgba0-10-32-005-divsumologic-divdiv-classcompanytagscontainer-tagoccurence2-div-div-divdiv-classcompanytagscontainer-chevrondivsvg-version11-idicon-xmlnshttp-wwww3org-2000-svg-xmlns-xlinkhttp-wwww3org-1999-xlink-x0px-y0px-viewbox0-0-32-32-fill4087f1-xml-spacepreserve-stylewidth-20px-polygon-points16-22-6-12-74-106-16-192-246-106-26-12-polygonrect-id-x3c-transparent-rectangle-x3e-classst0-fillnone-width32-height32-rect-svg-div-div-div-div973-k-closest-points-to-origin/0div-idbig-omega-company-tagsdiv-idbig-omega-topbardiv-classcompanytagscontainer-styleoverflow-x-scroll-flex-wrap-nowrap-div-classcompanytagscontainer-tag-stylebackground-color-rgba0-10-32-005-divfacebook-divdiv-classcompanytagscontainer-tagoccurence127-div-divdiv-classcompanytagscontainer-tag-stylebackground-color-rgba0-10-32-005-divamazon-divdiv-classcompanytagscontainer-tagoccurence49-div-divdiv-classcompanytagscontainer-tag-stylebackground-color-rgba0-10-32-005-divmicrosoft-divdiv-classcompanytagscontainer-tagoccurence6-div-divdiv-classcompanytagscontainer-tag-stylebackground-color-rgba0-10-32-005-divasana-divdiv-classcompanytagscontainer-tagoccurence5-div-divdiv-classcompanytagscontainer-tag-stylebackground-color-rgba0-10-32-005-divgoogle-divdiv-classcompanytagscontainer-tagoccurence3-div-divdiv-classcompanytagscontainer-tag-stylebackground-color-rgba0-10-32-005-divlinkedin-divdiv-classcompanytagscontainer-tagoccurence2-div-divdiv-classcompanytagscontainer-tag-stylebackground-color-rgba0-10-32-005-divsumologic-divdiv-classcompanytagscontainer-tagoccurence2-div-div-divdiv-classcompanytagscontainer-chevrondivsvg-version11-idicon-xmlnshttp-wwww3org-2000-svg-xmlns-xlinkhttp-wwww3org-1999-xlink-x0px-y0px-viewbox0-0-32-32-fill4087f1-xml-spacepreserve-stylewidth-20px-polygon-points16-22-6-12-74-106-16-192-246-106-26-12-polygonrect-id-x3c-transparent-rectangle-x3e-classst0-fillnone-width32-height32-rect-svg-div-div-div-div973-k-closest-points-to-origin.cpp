class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
    {
        priority_queue<pair<double,vector<int>>, vector<pair<double,vector<int>>>, greater<pair<double,vector<int>>>> pq;
        vector<vector<int>> ans;
        int n = points.size();
        int m = points[0].size();
        double dist = 0;
        for(int i = 0; i<n; i++)
        {
            dist = sqrt(abs(points[i][0]*points[i][0] + points[i][1]*points[i][1]));
            pq.push({dist,{points[i][0],points[i][1]}});
            // for(int j = 0; j<m; j++)
            // {
            //     dist += sqrt(abs(points[i][j]*points[i][j]))
            // }
        }
        
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};