class Solution {
public:
    string frequencySort(string s)
    {
        priority_queue<pair<int,char>> p;
        string str = "";
        unordered_map<char,int> m;
        
        for(auto x: s)
        {
            m[x]++;
        }
        for(auto x: m)
        {
            p.push({x.second,x.first});
        }
        
        while(!p.empty())
        {
            // str += string(p.top().first,p.top().second); 
            char ch = p.top().second;
            int freq = p.top().first;
            
            while(freq--)
            {
                str += ch;
                
            }
            p.pop();
        }
        return str;
    }
};