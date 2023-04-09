class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures)
    {
        stack<pair<int,int>> st;
        vector<int> v(temperatures.size(),0);
        for(int i = temperatures.size()-1; i>=0; i-- )
        {
            while(!st.empty() && st.top().first<=temperatures[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                v[i] = st.top().second - i;
            }
            st.push({temperatures[i],i});
        }
        return v;
    }
};