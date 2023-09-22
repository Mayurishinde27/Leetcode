class Solution {
    
    int solve(string s, string word)
    {
        int idx1 = 0;
        int idx2 = 0;

        while(idx1 < s.size() && idx2 < word.size())
        {
            if(s[idx1] == word[idx2])
            {
                idx2++;
            }
            idx1++;
        }
        return idx2 == word.size();
    }
public:
    int numMatchingSubseq(string s, vector<string>& words)
    {
        int count = 0;
        
        unordered_map<string,int> mp;
        
        for(auto x:words)
        {
            mp[x]++;
        }
        
        for(auto x:mp)
        {
            if(solve(s,x.first))
            {
                count += x.second;
            }
        }
        return count;
    }
};