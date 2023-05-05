class Solution {
public:
    int maxVowels(string s, int k)
    {
        queue<char> q;
        int count = 0;
        int maxi = 0;
        for(int i = 0; i<s.size(); i++)
        {
            q.push(s[i]);
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count++;
            }
            
            if(q.size() == k)
            {
                maxi = max(maxi,count);
                char ch = q.front();
                q.pop();
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                {
                    count --;
                }
            }
            
        }
        
        return maxi;
        
    }
};