class Solution {
//     string convert(stack<char>&st)
//     {
//         string str = "";
//         while(!st.empty())
//         {
//             str += st.top();
//             st.pop();
//         }
        
//         reverse(str.begin(),str.end());
//         return str;
        
//     }
    void solve(int open, int close,int n,string str,vector<string>&ans)
    {
        // base case
        if(str.size() == 2*n)
        {
            // string str = convert(st);
            ans.push_back(str);
            return;
        }
        
        // check if we can add open parantheses
        if(open < n)
        {
            str += "(";
            solve(open+1, close, n,str, ans);
            str.pop_back();
        }
        
        // check if we can add close paranthese
        if(close < open)
        {
            str += ")";
            solve(open, close+1, n,str, ans);
            str.pop_back();
        }
    }

//     void solve(string str , int open, int close,int n,vector<string>&ans)
//     {
//         // base case
//         if(open == close == n)
//         {
//             // string str = convert(st);
//             ans.push_back(str);
//             return;
//         }
        
//         // check if we can add open parantheses
//         if(open < n)
//         {
//             solve(str +'(' , open+1, close, n, ans);
//         }
        
//         // check if we can add close paranthese
//         if(close < open)
//         {
//             solve(str+ ')', open, close+1, n, ans);
//         }
//     }
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        string str = "";
        solve(0,0,n,str,ans);
        // solve(str,0,0,n,ans);
        return ans;
        
    }
};