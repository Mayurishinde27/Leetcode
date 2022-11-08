class Solution {
public:
    int maximum69Number (int num)
    {
        int a = num;
        string s = to_string(a); // convert int to string
        int count = 0;
        
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == '6')
            {
                s[i] ='9';
                count++;
                break;
                
            }
        }
        if(count == 0)
        {
            return num;
        }
        
        int n = stoi(s); // convert string to int
        return n;
        
//         vector<int> v;
//         int count = -1;
//         while(num != 0)
//         {
//             v.push_back(num%10);
//             count++;
//             num = num/10;
//         }
//         reverse(v.begin(),v.end());
//         int idx;
        
//         for(int i = 0; i<v.size(); i++)
//         {
//             if(v[i] == '6')
//             {
//                 v[i] = '9';
//                 //idx = i;
//                 break;
//             }
//             else
//                 continue;
//         }
//         int n = 0;
//         int i = 0;
//         //int s = v.size() - 1;
        
//         for(int j = 0; j < v.size(); j++)
//         {
//             n = n*10 + v[j];
//         }
        
//         // for(int j = count; j>0; j--)
//         // {
//         //     n += v[i] * (10 ^ j);
//         // }
//         return n;
        
    }
};