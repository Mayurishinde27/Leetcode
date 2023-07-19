class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals)
    {
        priority_queue<pair<int,int>> pq;
        sort(intervals.begin(),intervals.end());
        
        pq.push({intervals[0][1],intervals[0][0]});
        
        int ans = 0;
        for(int i = 1; i<intervals.size(); i++)
        {
            if(pq.top().first > intervals[i][0])
            {
                if(pq.top().first > intervals[i][1])
                {
                    pq.pop();

                    pq.push({intervals[i][1],intervals[i][0]});
                }
                
                ans++;
            }
            else
            {
                pq.push({intervals[i][1],intervals[i][0]});
            }
        }
        
        return ans;
    }
};