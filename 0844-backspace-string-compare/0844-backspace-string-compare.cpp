class Solution {
public:
    
    string remove(string s)
    {
        stack<char> st;
        //st.push(s[0]);
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
       // reverse(str.begin(),str.end());
        return str;
    }

    // int remove(string str)
    // {
    //     int count = 0;
    //     for(int i = 0; i<str.size(); i++)
    //     {
    //         if(str[i] == '#')
    //         {
    //             count++;
    //         }
    //     }
    //     return count;
    // }
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