class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words)
    {
        vector<string> v;
        v.push_back(words[0]);
        int j = 0;
        for(int i = 1; i<words.size(); i++)
        {
            string a = words[i];
            sort(a.begin(),a.end());
            string b = v[j];
            sort(b.begin(),b.end());
            
            if(a == b)
            {
                continue;
            }
            else
            {
                v.push_back(words[i]);
                j++;
            }
        }
        return v;
    }
};