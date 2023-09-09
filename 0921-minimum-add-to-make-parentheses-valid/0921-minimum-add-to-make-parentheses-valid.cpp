class Solution {
public:
    stack<char> st;
    int minAddToMakeValid(string s)
    {
        int count = 0;
        for(int i = 0; i< s.size(); i++)
        {
            if(s[i] == '(') 
            {
                st.push(s[i]);
            }
            else if(s[i] == ')' && (st.empty() || st.top() != '('))
            {
                count++;
            }
            else
            {
                st.pop();
            }
            
        }
        
        return count + st.size();
        
    }
};