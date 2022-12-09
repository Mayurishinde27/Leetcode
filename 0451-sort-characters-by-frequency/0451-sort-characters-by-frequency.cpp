class Solution {
public:
    static bool cmp(pair<char,int> & a , pair<char,int> & b)
    {
        return a.second > b.second;
    }
    string frequencySort(string s) 
    {
        unordered_map<char,int> m;
        for(auto x:s)
        {
            m[x]++;
        }
        
        string str = "";
        vector<pair<char,int>> v(m.begin(),m.end());
        sort(v.begin(),v.end(),cmp);
        
        for(int i = 0; i<v.size(); i++)
        {
            for(int j = 0; j<v[i].second; j++)
            {
                str += v[i].first;
            }
        }

        return str;
        
    }
};