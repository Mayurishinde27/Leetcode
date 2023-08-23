class Solution {
    
public:
        string reorganizeString(string s) {
            if (s.size() == 1)
                return s;

            unordered_map<char, int> charCount;
            for (char c : s) {
                charCount[c]++;
                if (charCount[c] > (s.size() + 1) / 2) {
                    return ""; // Impossible to rearrange
                }
            }

            auto comp = [&](char a, char b) {
                return charCount[a] < charCount[b];
            };

            priority_queue<char, vector<char>, decltype(comp)> pq(comp);
            for (auto entry : charCount) {
                pq.push(entry.first);
            }

            string result;
            while (pq.size() >= 2) {
                char first = pq.top(); pq.pop();
                char second = pq.top(); pq.pop();

                result += first;
                result += second;

                if (--charCount[first] > 0) {
                    pq.push(first);
                }
                if (--charCount[second] > 0) {
                    pq.push(second);
                }
            }

            if (!pq.empty()) {
                result += pq.top();
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