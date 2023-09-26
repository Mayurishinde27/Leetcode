class Solution {

public:
    string removeDuplicateLetters(string s)
    {
        unordered_map<char,int> mp;
        unordered_set<char> st;
        
        string res = "";
        
        for(auto x:s)
        {
            mp[x]++;
        }
        
        for(auto x:s)
        {
            mp[x]--;
            
            if(st.count(x) == 0)
            {
                while(!res.empty() && x < res.back() && mp[res.back()] > 0){
                    st.erase(res.back());
                    res.pop_back();
                }
                res.push_back(x);
                st.insert(x);
            }
        }

        return res;
        
    }
};