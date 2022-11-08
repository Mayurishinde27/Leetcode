class Solution {
public:
    
    int vowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A'|| ch=='E' ||ch=='I'||ch=='O'||ch=='U' )
        {
            return 1;
        }
        return 0;
            
    }
    string reverseVowels(string s)
    {
        int i = 0;
        int j = s.size();
        
        while(i<=j)
        {
            if(vowel(s[i]) && vowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!vowel(s[j]))
            {
                j--;
            }
            else
                i++;
        }
        return s;
        
    } 
};