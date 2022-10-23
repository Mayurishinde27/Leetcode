class Solution {
public:
    int most(string s)
    {
        int count = 1;
        int i = 0;
        while(s[i]!='\0')
        {
            if(s[i]==' ')
            {
                count++;
            }
            i++;
            
        }
        return count;
    }
    
    int mostWordsFound(vector<string>& sentences)
    {
        
        int maxi = 0;
        for(int i=0; i<sentences.size(); i++)
        {
            int m = most(sentences[i]);
            maxi = max(maxi,m);
            
        }
        return maxi;
        
    }
};