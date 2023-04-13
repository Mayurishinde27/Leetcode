class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped)
    {

        stack<int> st;
        int j = 0,i = 0;
        while(i<pushed.size())
        {
            st.push(pushed[i]);
            i++;
            while(!st.empty() && st.top() == popped[j])
            {
                st.pop();
                j++;
            }
        }
        return st.empty();


        
    }
};