class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp)
    {
        vector<int> v(temp.size(),0);
        int sum = 0;
        stack<int> st;
        for(int i = temp.size()-1; i>=0; i--)
        {
            while(!st.empty() && temp[st.top()] <= temp[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                v[i] = st.top() - i;
            }
            st.push(i);
        }
         

        return v;
//         vector<int> v;
//         stack<int> st;
//         int count;
//         for(int i = 0; i<temp.size(); i++)
//         {
//             wh(!st.empty() && st.top()>temp[i])
//             {
                
//             }
//             count = 0;
//             for(int j = i + 1; j<temp.size(); j++)
//             {
//                 count++;
//                 if(temp[i] < temp[j])
//                 {
//                     v.push_back(count);
//                     count = 0;
//                     break;
//                 }
                
//             }
//             if(count!=0)
//             {
//                 v.push_back(0);
//             }
            
            
            
//         }
//         int p = v.size();
//         int q = temp.size();
//         int s = q - p;
//         for(int i = 0; i<s; i++)
//         {
//             v.push_back(0);
//         }
//         return v;
        
        
        
    }
};