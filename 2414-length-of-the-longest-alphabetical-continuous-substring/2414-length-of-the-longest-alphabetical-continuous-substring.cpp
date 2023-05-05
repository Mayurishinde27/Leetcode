class Solution {
public:
    int longestContinuousSubstring(string s)
    {
        stack<char> st;
        int count = 1;
        int maxi = 1;
        for(int i = 0; i<s.size(); i++)
        {
            // if(st.empty())
            // {
            //     st.push(s[i]);
            // }
            if(!st.empty())
            {
                if(s[i] - st.top() == 1) 
                {
                    count++;
                    st.pop();
                }
                else
                {
                    count = 1;
                }
                maxi = max(maxi,count);
                
            }
            st.push(s[i]); //ab
            // for(int j = i+1; j<s.size(); j++)
            // {
            //     if(s[j] - s[i] == 1)
            //     {
            //         count++;
            //     }
            //     else
            //         break;
            // }
            // maxi = max(maxi,count);
        }
        return maxi;
        
    }
};