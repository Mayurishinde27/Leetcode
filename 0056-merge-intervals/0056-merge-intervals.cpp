class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        vector<vector<int>> mergeInterval;
        if(intervals.size() == 0) return mergeInterval;
        
        sort(intervals.begin(),intervals.end());
        vector<int> temp = intervals[0];
        
        for(auto x: intervals)
        {
            if(x[0] <= temp[1])
            {
                temp[1] = max(x[1], temp[1]);
            }
            else
            {
                mergeInterval.push_back(temp);
                temp = x;
            }
        }
        
        mergeInterval.push_back(temp);
        return mergeInterval;
        
    }
};