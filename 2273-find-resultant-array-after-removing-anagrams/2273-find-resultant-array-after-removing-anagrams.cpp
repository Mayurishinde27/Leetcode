class Solution {
public:
    int isAnagram(string s1, string s2)
    {
        unordered_map<char,int> m1;
        if(s1.size() != s2.size())
        {
            return 0;
        }
        
        for(auto x:s1)
        {
            m1[x]++;
        }
        for(auto x: s2)
        {
            m1[x]--;
            if(m1[x]<0)
            {
                return 0;
            }
        }
        return 1;
    }
    vector<string> removeAnagrams(vector<string>& words)
    {
           vector<string> :: iterator it;
           for(int i = 0; i< words.size() - 1; i++)
           {
               if(isAnagram(words[i],words[i+1]))
               {   
                   it = words.begin();
                   words.erase(it + 1 + i--);
               }
           }
        return words;

        
        //         vector<vector<string>> v;
//         unordered_map<string,vector<string>> m;
        
//         for(int i = 0; i<words.size(); i++)
//         {
//             string s = words[i];
//             sort(s.begin(),s.end());
//             m[s].push_back(words[i]);
//         }
//         for(auto x:m)
//         {
//             v.push_back(x.second);
//         }
//         for(int i = 0; i<v.size(); i++)
//         {
//             vec.push_back(v[i][0]);
//         }
//         return vec;
        
        
       
       
        
    }
};