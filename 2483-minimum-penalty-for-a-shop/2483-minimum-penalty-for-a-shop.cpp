class Solution {
public:
    int bestClosingTime(string&str)
    {   
        
         int count = 0;
        // for(int i = 0; i<str.size(); i++)
        // {
        //     if(str[i] == 'Y'){
        //             count++;
        //     }
        // }
        int res = -1;
        int mini = 0;
        for(int i = 0; i<str.size(); i++)
        {
            if(str[i] == 'Y'){
                count++;
            }
            else{
                count--;
            }
            
            if(count>mini)
            {
                mini = count;
                res = i;
            }
        }
        
        return res+1;
        
//         int mini = count;
//         int res = 0;
//         for(int i = 0; i<str.size(); i++)
//         {
//             count = 0;
//             for(int j = i; j<str.size(); j++)
//             {
//                 if(i == j){
//                     if(str[j] == 'N'){
//                         str[j] = 'Y';
//                     }
//                     else if(str[j] == 'Y'){
//                         str[j] = 'N';
//                     }
//                 }
//                 if(str[j] == 'Y'){
//                     count++;
//                 }
//             }
//             if(count < mini)
//             {
//                 mini = count;
//                 res = i+1;
//             }
            
//         }
//         return res;
        
    }
};