class Solution {
public:
    
    int findMinArrowShots(vector<vector<int>>& point)
    {
        int count = 1;
        int end = point[0][1];

        sort(point.begin(),point.end());
        // [1,6]  // end=6
        // [2,8]  // end=2
        // [7,12] // end=12 c=2
        // [10,16] // end=12 c=2

        for(int i = 0; i < point.size(); i++)
        {
            if(point[i][0] > end)
            {
                count++;
                end = point[i][1];
            }
            else
            {
                end = min(end, point[i][1]);
            }
        }
        
        return count;

    }

};