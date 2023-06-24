class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights)
    {
        int n = heights.size();
        int m = heights[0].size();
        
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>> > pq;
        
        
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        
        dist[0][0] = 0;
        
        pq.push({0,{0,0}});
        
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        while(!pq.empty())
        {
            auto it = pq.top();
            pq.pop();
            
            int effort = it.first;
            int row = it.second.first;
            int col = it.second.second;
            
            if(row == n-1 && col == m - 1)
            {
                return effort;
            }
            for(int i = 0; i<4; i++)
            {
                int r = row + delrow[i];
                int c = col + delcol[i];
                
                if(r>=0 && c>=0 && r<n && c<m)
                {
                    int newEffort = max(abs(heights[row][col] - heights[r][c]), effort);
                    if(newEffort < dist[r][c])
                    {
                        dist[r][c] = newEffort;
                        pq.push({newEffort,{r,c}});
                    }
                }
            }
        }
        
        return 0;
        
    }
};