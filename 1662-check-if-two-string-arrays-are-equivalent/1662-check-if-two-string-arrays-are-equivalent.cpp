class Solution {
public:
    
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
    {
        string str1 = "";
        string str2 = "";
        for(int i = 0; i<word1.size(); i++)
        {
            //str1 = strcat(str1,word1[i]);
            str1 += word1[i];
        }
        for(int i = 0; i<word2.size(); i++)
        {
            //str2 = strcat(str2,word2[i]);
            str2 += word2[i];
        }
        
        // if(str1 == str2)
        // {
        //     return true;
        // }
        
        int i = 0, j = 0;
        if(str1.size() != str2.size())
        {
            return false;
        }
        while(i<str1.size() && j<str2.size())
        {
            if(str1[i]==str2[j])
            {
                i++;
                j++;
            }
            else
                return false;
        }
        return true;
        
    }
    


};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
// //     int firstPalindrome(vector<string>& words)
// //     {
// //         for(int i=0; i<words.size(); i++)
// //         {
// //             string s = words[i];
// //             string temp = s;
            
// //             reverse(temp.begin(),temp.end());
// //             if(s==temp)
// //             {
// //                 return 1;
// //             }
// //         }
// //         return 0;
// //     }
//     bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
//     {
//     string s1 = word1[0];
//     string s2 = word2[0];
//     for(int i=0; i<word1.size(); i++)
//     {
//         s1 = s1+word1[i];
//     }
//     for(int i=0; i<word2.size(); i++)
//     {
//         s2 = s2+word2[i];
//     }
    
//     if(s1==s2)
//     {
//         return true;
//     }
//     return false;
        

        
// //         if(s1==s2)
// //         {
// //             return true;
// //         }
// //         return false;
//     }
//};