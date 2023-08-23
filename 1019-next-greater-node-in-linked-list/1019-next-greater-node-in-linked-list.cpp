/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head)
    {
        vector<int> v;
        
        ListNode* run = head;
        
        while(run != NULL)
        {
            v.push_back(run -> val);
            run = run -> next;
        }
        
        int n = v.size();
        vector<int> ans(n,0);
        stack<int> st;
        
        for(int i = 0; i<v.size(); i++)
        {
            while(!st.empty() && v[i] > v[st.top()])
            {
                ans[st.top()] = v[i];
                st.pop();
            }
            st.push(i);
        }
        
        // for(int i = 0; i<v.size(); i++)
        // {
        //     int idx = upper_bound(v.begin()+i,v.end(),v[i]) - v.begin()+i;
        //     if(idx < v.size()){
        //         ans[i] = v[idx];
        //     }
        // }
        return ans;
        
        
    }
};