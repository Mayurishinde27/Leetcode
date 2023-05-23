class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights)
    {
        vector<string> v;
        map<int,string> m;
        
        for(int i = 0; i<names.size(); i++)
        {
            m[heights[i]] = names[i];
        }

        for(auto x:m)
        {
            v.push_back(x.second);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};