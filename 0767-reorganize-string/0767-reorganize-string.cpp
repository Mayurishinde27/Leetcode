class Solution {

public:
    string reorganizeString(string s)
    {
        int n = s.size();
        if(n == 1) return s;
        map<char,int> mpp;
        
        for(auto x: s){
            mpp[x]++;
            if(mpp[x] > (n+1)/2){
                return "";
            }
        }
        
        
        priority_queue<pair<int,char>> pq;
        
        for(auto x:mpp){
            pq.push({x.second,x.first});
        }

        string result = "";
        
        while(pq.size() > 1){
            
            char first = pq.top().second;
            pq.pop();
            char sec = pq.top().second;
            pq.pop();
            
            result += first;
            result += sec;
            
            if(--mpp[first] > 0)
            {
                pq.push({mpp[first], first});
            }
            
            if(--mpp[sec] > 0)
            {
                pq.push({mpp[sec], sec});
            }
        }
        
        
        if (!pq.empty())
        {
            char last = pq.top().second;
            if(mpp[last] > 1) return "";
            else{
            result += last;
            }
        }

        return result;
    }


//     string reorganizeString(string s)
//     {
//         if(s.size() == 1) return s;
//         sort(s.begin(),s.end());
//         vector<char> v;
//         deque<char> dq;
//         for(auto x:s)
//         {
//             dq.push_back(x);
//         }
        
//         while(dq.size() >= 1)
//         {
//             char left = dq.front();
//             // dq.pop_front();
//             v.push_back(left);
//             char right;
//             if(dq.size() > 1){
//                 right = dq.back();
//                 dq.pop_back();
//                 if(v.back() == right) return "";
//                 else{
//                 v.push_back(right);
//                 }
//             }
//             dq.pop_front();
            
           
//             // v.push_back(right);
//         }
        
//         string ans = "";
        
//         for(auto x:v){
//             ans += x;
//         }
//         return ans;
        
//     }
};