class Solution {
public:
    
    string remove(string s)
    {
        stack<char> st;
        string str = "";
        for(int i= 0; i<s.size(); i++){
            if(!st.empty() && s[i] == '#') //|| s[i] != '#'
            {
                st.pop();
            }
            if(s[i] != '#')
            {
               st.push(s[i]);
            }
            
        }
        while(!st.empty()){
            str += st.top();
            st.pop();
        }

        return str;
    }

    bool backspaceCompare(string s, string t)
    {
        string a = remove(s);
        string b = remove(t);
        
        if(a == b)
        {
            return true;
        }
        return false;
        
    }
};