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
        // for(auto y:m)
        // {
        //     v.push_back(make_pair(y.second,y.first));
        // }
        
        for(int i = 0; i<v.size(); i++)
        {
            for(int j = 0; j<v[i].second; j++)
            {
                str += v[i].first;
            }
        }
//         for(auto x:v)
//         {
//             int p = x.first;
//             while(p--)
//             {
//                 vec.push_back(x.second);
//             }
//         }
        
//         for(int i=0; i<v.size(); i++)
//         {
//             int p = v[i].first;
//             while(p--)
//             {
//                 vec.push_back(v[i].second);
//             }
//         }
//         str = vec;
        return str;
        
    }
};