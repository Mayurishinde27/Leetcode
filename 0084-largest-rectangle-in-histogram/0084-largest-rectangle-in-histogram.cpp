class Solution {
public:
    int largestRectangleArea(vector<int>& height)
    {
        int n = height.size();
        int leftSmall[n];
        int rightSmall[n];
        
        stack<int> st;
        
        // for computing left small
        
        for(int i = 0; i<n; i++)
        {
            while(!st.empty() && height[st.top()] >= height[i])
            {
                st.pop();
            }
            
            if(st.empty()) leftSmall[i] = 0;
            else{
                leftSmall[i] = st.top()+1;
            }
            st.push(i);
        }

        while(!st.empty()){
            st.pop();
        }
        // for computing right small
        
        for(int i = n-1; i>=0; i--)
        {
            while(!st.empty() && height[st.top()] >= height[i])
            {
                st.pop();
            }
            
            if(st.empty()) rightSmall[i] = n-1;
            else{
                rightSmall[i] = st.top()-1;
            }
            st.push(i);
        }
        
        int ans = 0;
        
        for(int i = 0; i<n; i++)
        {
            ans = max(ans, (rightSmall[i] - leftSmall[i] + 1) * height[i]);
        }
        
        return ans;
        
        // TC: O(N)+O(N)+O(N)+O(N)
        // SC: O(N)+O(N)+O(N)
    }
};