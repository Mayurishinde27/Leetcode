class Solution {
    public:
    
    static bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.first==b.first)
        {
            return a.second>b.second;
        }
        return a.first<b.first;
    }
    vector<int> frequencySort(vector<int>& nums)
    {
        map<int,int> m;
        
        //for calculating the frequency
        for(auto x:nums)
        {
            m[x]++;
        }
        vector<int>v;
        vector<pair<int,int>> vec;
        
        for(auto y:m)
        {
            vec.push_back(make_pair(y.second,y.first));
        }
        sort(vec.begin(),vec.end(),cmp);
        for(int i=0; i<vec.size(); i++)
        {
            int p;
            p = vec[i].first;
            while(p--)
            {
                v.push_back(vec[i].second);
            }
        }
        return v;
        
    }
};