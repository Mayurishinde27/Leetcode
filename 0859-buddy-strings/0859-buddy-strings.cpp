class Solution {
public:
    bool buddyStrings(string s, string goal)
    {
        
        string a = s;
        string b = goal;
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
            
        if(a != b) return 0;
           
        unordered_map<char,int> mp;
        
        if(s.size() == 1 || goal.size() == 1) return 0;
        
        if(s.size() != goal.size()) return 0;
        
        int count = 0;
        

        for(int i =0; i<s.size(); i++){
            if(s[i] - goal[i] != 0){
                count++;
            }
            
        }
        
        if(count == 2) return 1;
        else if(count > 2) return 0;
        
        
        for(auto x: s)
        {
            mp[x]++;
        }
//         for(auto x: goal)
//         {
//             mp[x]--;
//         }
        
        if(s == goal)
        {
            if(mp.size() == 1) return 1;

        }
        for(auto x: mp)
        {
            if(x.second > 1) return 1;
        }
//         if(s != goal)
//         {
//             sort(s.begin(),s.end());
//             sort(goal.begin(),goal.end());
            
//             if(s == goal) return 1;
//             // for(auto x: goal)
//             // {
//             //     mp[x]--;
//             // }
//         }
        return 0;
        
    }
};