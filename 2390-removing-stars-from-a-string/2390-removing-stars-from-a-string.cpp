class Solution {
public:
    string removeStars(string s)
    {
        stack<char> st;
        string str = "";
        
        for(int i = 0; i<s.size(); i++)
        {
            if(st.empty() || s[i]!= '*')
            {
                st.push(s[i]);
            }
            else if(s[i] == '*')
            {
                st.pop();
            }
        }
        
        while(!st.empty())
        {
            str += st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
        
    }
};