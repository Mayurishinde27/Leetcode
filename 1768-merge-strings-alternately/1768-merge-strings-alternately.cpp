class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        int i = 0;
        int j = 0;
        
        string str = "";
        
        while(i<word1.size() && j<word2.size())
        {
            str += word1[i];
            str += word2[j];
            i++;
            j++;
        }
        if(word1.size() > word2.size())
        {
            for(int i = word2.size(); i<word1.size(); i++)
            {
                str += word1[i];
            }
        }
        else
        {
            for(int i = word1.size(); i<word2.size(); i++)
            {
                str += word2[i];
            }
        }
        return str;
        
    }
};