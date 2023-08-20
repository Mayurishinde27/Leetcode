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
//     ListNode* insertList(vector<int> arr)
//     {
//         ListNode* ans = new ListNode(arr[0]);
        
//         for(int i = 1; i<arr.size(); i++)
//         {
//             ListNode* temp = new ListNode(arr[i]);
//             ans -> next = temp;
//             temp -> next = NULL;
//             temp = temp -> next;
//             ans = ans -> next;
//         }
//         return ans;
//     }
public:
    ListNode* rotateRight(ListNode* head, int d)
    {
        if(head == NULL || head -> next == NULL) return head;
        vector<int> arr;
        ListNode* run = head;
        while(run!=NULL)
        {
            arr.push_back(run->val);
            run = run -> next;
        }
        int n = arr.size();
        d = d % n;
        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin()+d);
        reverse(arr.begin()+d, arr.end());
        
        run = head;
        int idx = 0;
        while(run != NULL)
        {
            run -> val = arr[idx++];
            run = run -> next;
        }

        return head;
    }
};