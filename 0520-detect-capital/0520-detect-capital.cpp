class Solution {
public:
    
    bool detectCapitalUse(string word)
    {
        int cap = 0;
        int small = 0;
        for(int i = 0; i<word.size(); i++)
        {
            if(word[i]>= 'A' && word[i] <='Z')
            {
                cap++;
            }
            if(word[i]>= 'a' && word[i] <='z')
            {
                small++;
            }
            
        }
        
        if(cap == 1 && word[0]>='A' && word[0]<= 'Z')
        {
            return true;
        }
        
        if(word.size() == cap || word.size() == small)
        {
            return true;
        }
        
        return false;
        
        
    }
};