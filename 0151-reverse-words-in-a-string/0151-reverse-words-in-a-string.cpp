class Solution {
public:
    
//     vector<string> rev(char ch)
//     {
//         vector<string> v;
//         string str = "";
        
//         int i = 0;
//         while(ch != ' ')
//         {
//             str += ch;
//         }
//         v.push_back(str);
//         v.push_back(" ");
//         return v;
//     }
    string reverseWords(string s)
    {
          int k=s.size()-1;
          while(k>0 && s[k--]==' ')
          {
               s.pop_back();
          }
                 
          k=0;
          while(k<s.size() && s[k]==' ')
          {
              k++;
          }
          s.erase(0,k);
          reverse(s.begin(),s.end());
          int j=0;
          for(int i=0; i<s.size();i++)
          {
              if(s[i]==' ')
              {
                  reverse(s.begin()+j,s.begin()+i);
                      i++;
                  j=i;
                  int l=i,jk=0;
                  while(l<s.size() && s[l++]==' ')
                      jk++;
                  s.erase(i,jk);
              }
          }
           reverse(s.begin()+j,s.end());
          
          return s;
//         vector<string> str;
//        // int i = 0;
//         for(int i = 0; i<s.size(); i++)
//         {
//             str = rev(s[i]);
//             // if(s[i] == " ")
//             // {
//             //     continue;
//             // }
//             // else
//             // {
//                // str.push_back(s[i]);
//             // }
            
//         }
//         reverse(str.begin(),str.end());
//         string ss = "";
//         for(int i = 0; i <str.size(); i++)
//         {
//             ss +=str[i];
//         }
//         return ss;
        
    }
};