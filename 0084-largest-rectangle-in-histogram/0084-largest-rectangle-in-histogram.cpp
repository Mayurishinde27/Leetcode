class Solution {
public:
    int largestRectangleArea(vector<int>& heights)
    {
        heights.push_back(0);
        int n = heights.size();
        int ans = 0;
        stack<int> s;
        
        for(int i = 0; i<n; i++)
        {
            while(s.size() && heights[i] <= heights[s.top()])
            {
                int h = heights[s.top()];
                s.pop();
                int left = s.size() ? s.top() : -1;
                ans = max(ans, (i - left - 1) * h);
            }
            s.push(i);
        }
        return ans;
    }
};