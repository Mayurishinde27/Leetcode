class Solution {
    
    void solve(int idx, string &str, string &s, vector<string>&ans)
    {
        if(idx == s.size()){
            ans.push_back(str);
            return;
        }
        
        if(isdigit(s[idx])){
            str.push_back(s[idx]);
            solve(idx+1,str,s,ans);
        }
        else
        {
            string s1 = str;
            s1.push_back(tolower(s[idx]));
            solve(idx+1,s1,s,ans);
            
            string s2 = str;
            s2.push_back(toupper(s[idx]));
            solve(idx+1,s2,s,ans);
        }
        
    }
public:
    vector<string> letterCasePermutation(string s)
    {
        vector<string> ans;
        string str = "";
        solve(0,str,s,ans);
        return ans;
        
    }
};