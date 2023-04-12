class Solution {
public:
    string simplifyPath(string path)
    {
        stack<string> st;
        string str = "";
        // st.push("/");
        for(int i = 0; i<path.size(); i++)
        {
            string check = "";
            if(path[i]== '/')
            {
                continue;
            }
            while(i<path.size() && path[i] != '/')
            {
                check += path[i];
                i++;
            }
            if(check == ".")
            {
                continue;
            }
            if(check == "..")
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else 
                st.push(check);
            // else if(st.top() == '/' && path[i] == '/')
            // {
            //     st.pop();
            // }
            // if(path[i] == '')
            // st.push(path[i]);
        }
        
        
        while(!st.empty())
        {
            str = "/" + st.top() + str;
            st.pop();
        }
        if(str.size() == 0)
        {
            return "/";
        }
        
        // reverse(str.begin(),str.end());
        return str;
        
    }
};