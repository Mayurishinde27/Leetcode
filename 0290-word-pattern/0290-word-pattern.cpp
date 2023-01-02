class Solution {
public:
    bool wordPattern(string pattern, string s)
    {
        
        stringstream ss(s);
        string str;
        
        vector<string> v;
        
        while(ss >> str)
        {
            v.push_back(str);
        }
        
        if(v.size() != pattern.size())
        {
            return false;
        }
        unordered_map<char, string> mp;
        set<string> check;
        
        for(int i = 0; i< v.size(); i++)
        {
            if(mp.count(pattern[i]))
            {
                if(mp[pattern[i]] != v[i])
                {
                    return false;
                }
            }
            else
            {
                if(check.find(v[i]) != check.end())
                {
                    return false;
                }
            }
            mp[pattern[i]] = v[i];
            check.insert(v[i]);
        }

        return true;

            
    }
};



