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

    ListNode* mergeNodes(ListNode* head)
    {
        int sum = 0;
        ListNode * temp = new ListNode();
        ListNode * ptr = temp;
        
        ListNode * run = head->next;
        while(run!=NULL)
        {
            if(run -> val == 0)
            {
                temp -> next = new ListNode(sum);
                temp = temp->next;
                sum = 0;
            }
            else{
            sum += run->val;
            }
            run = run -> next;
        }
        
        return ptr->next;
    }
};