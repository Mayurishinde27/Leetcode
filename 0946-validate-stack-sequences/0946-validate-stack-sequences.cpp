class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped)
    {

        stack<int> st;
        int j = 0;
        for(int i = 0; i<pushed.size(); i++)
        {
            st.push(pushed[i]);
            
            while(!st.empty() && st.top() == popped[j])
            {
                st.pop();
                j++;
            }
        }
        if(!st.empty())
        {
            return 0;
        }
        return 1;

        // st.push(pushed[0]);
        //     while(j<popped.size())
        //     {
        //         while(!st.empty() && st.top() == popped[j])
        //         {
        //             st.pop();
        //             j++;
        //         }
        //         if(i < pushed.size())
        //         {
        //             st.push(pushed[i]);
        //             i++;
        //         }
                
                
                // if(i >= pushed.size())
                // {
                //     i--;
                // }
                
                // if(i < pushed.size())
                // {
                //     i++;
                // }
            // }
            // if(pushed[i] != popped[i])
            // {
            //     st.push(pushed[i]);
            // }
            // // 1,2,3
            // if(popped[i] == pushed[i])
            // {
            //     continue;
            // }
        // }

        
    }
};