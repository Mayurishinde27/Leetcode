class Solution {
public:
    string predictPartyVictory(string senate)
    {
        stack<char> st;

        for(int i = 0; i<senate.size(); i++)
        {
            if(st.empty())
            {
                st.push(senate[i]);
            }
            else
            {
                if(st.top() == senate[i])
                {
                    st.push(senate[i]);
                }
                else 
                {
                    char p = st.top();
                    st.pop();
                    senate += p;
                }
            }
        }
        if(st.top() == 'R')
        {
            return "Radiant";
        }

        return "Dire";

        
    }
};