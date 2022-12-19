class Solution {
public:
    string truncateSentence(string s, int k)
    {
        string str = "";
        int count = 0;
        int i = 0;
        while(s[i]!='\0')
        {
            
            if(s[i] == ' ')
            {
                count++;
            }
            if(count == k)
            {
                break;
            }
            str += s[i];
            i++;
            
        }
        return str;
        
    }
};