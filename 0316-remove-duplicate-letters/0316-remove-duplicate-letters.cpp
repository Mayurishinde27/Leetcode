class Solution {
public:
    string removeDuplicateLetters(string s)
    {
        vector<int> freq(26,0);
        vector<int> vis(26,0);
        
        for(auto x:s){
            freq[x-'a'] ++;
        }
        
        stack<char> st;
        string res = "";
        
        for(int i = 0; i<s.size(); i++)
        {
            if(vis[s[i]-'a'] == 1){
                freq[s[i]-'a']--;
                continue;
            }
            while(!st.empty() && st.top() > s[i] && freq[st.top()-'a'] > 0){
                vis[st.top()-'a'] = 0;
                st.pop();
            }
            
            st.push(s[i]);
            vis[s[i]-'a'] = 1;
            freq[s[i]-'a']--;
        }
        
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        
        reverse(res.begin(),res.end());
        return res;

    }
};