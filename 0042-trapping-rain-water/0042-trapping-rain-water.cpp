class Solution {
public:
    int trap(vector<int>& height)
    {
        // vector<int> left,right;
        int left[100000];
        int right[100000];
        
        left[0] = height[0];
        int n = height.size();
        int ans;
        int sum = 0;
        
        for(int i = 1; i<n; i++)
        {
            left[i] = max(left[i-1],height[i]);
            // left[i].push_back(l);
        }
        right[n-1] = height[n-1];
        
        for(int i = n - 2; i>=0; i--)
        {
            right[i] = max(right[i+1],height[i]);
            // right[i].push_back(r);
        }
        for(int i = 1; i<n - 1; i++)
        {
            ans = min(left[i],right[i]);
            if(ans > height[i])
            {
                sum += ans - height[i];
            }
        }
        return sum;
    }
};
