class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str)
    {
        vector<vector<string>> v;
        unordered_map<string,vector<string>> m;
        
        for(int i = 0; i<str.size(); i++)
        {
            string s = str[i];
            sort(s.begin(),s.end());
            m[s].push_back(str[i]);
        }
        for(auto x:m)
        {
            v.push_back(x.second);
        }
        return v;
        
        
        
        
    }
};