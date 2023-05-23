class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights)
    {
        vector<string> v;
        map<int,string,greater<int>> m;
        
        for(int i = 0; i<names.size(); i++)
        {
            m[heights[i]] = names[i];
        }

        for(auto x:m)
        {
            v.push_back(x.second);
        }
    
        return v;
    }
};