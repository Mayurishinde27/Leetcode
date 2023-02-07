class Solution {
public:
   int totalFruit(vector<int>& fruits) {
       int j = 0;
       int result = 0;
       unordered_map<int,int>m;
       int i = 0;
       while(j<fruits.size())
       { 
           m[fruits[j]]++; 
           if(m.size()>2)
           {
               m[fruits[i]]--;
               if(m[fruits[i]] == 0)
               {
                   m.erase(fruits[i]);
               }
               i++;
           }
           else{
               result = max(result , j-i+1);
           }
           
           j++;
       }
       return result;
   }
};