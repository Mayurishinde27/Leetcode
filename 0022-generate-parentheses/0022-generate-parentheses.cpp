class Solution {
    void solve(int open, int close,int n,string str,vector<string>&ans)
    {
        // base case
        if(str.size() == 2*n)
        {
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

public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        string str = "";
        solve(0,0,n,str,ans);
        return ans;
        
    }
};