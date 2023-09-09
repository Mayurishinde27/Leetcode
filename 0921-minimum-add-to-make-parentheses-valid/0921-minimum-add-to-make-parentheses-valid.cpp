class Solution {
public:
    int minAddToMakeValid(string s)
    {
        stack<char> st;
        int cnt = 0;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(!st.empty() && s[i] == ')' && st.top() == '('){
                    st.pop();
                }
                else{
                    cnt++;
                }
            }
        }
        
//         for(int i = 0; i< s.size(); i++)
//         {
//             if(s[i] == '(') 
//             {
//                 st.push(s[i]);
//             }
//             else if(s[i] == ')' && (st.empty() || st.top() != '('))
//             {
//                 count++;
//             }
//             else
//             {
//                 st.pop();
//             }
            
//         }
        
        return cnt + st.size();
        
    }
};