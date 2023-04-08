class Solution {
public:
    stack<int> st;
    int evalRPN(vector<string>& tokens)
    {
        long long int a,b;
        for(int i = 0; i<tokens.size(); i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();

                if(tokens[i] == "+")
                {
                    st.push(b+a);
        
                }
                if(tokens[i] == "-")
                {
                     st.push(b-a);
                   
                }
                if(tokens[i] == "/")
                {
                     st.push(b/a);
                   
                }
                if(tokens[i] == "*")
                {
                     st.push(b*a);
                  
                }
                
             }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
        
    }
};