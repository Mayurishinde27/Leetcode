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
    ListNode* deleteDuplicates(ListNode* head)
    {
        if(head == NULL || head -> next == NULL) return head;
        ListNode* temp1 = head;
        
        while(temp1-> next != NULL)
        {
            if(temp1->val == temp1->next->val)
            {
                temp1->next = temp1->next->next;
            }
            else
            {
                temp1 = temp1->next;
            }
            
        }
        
        return head;
        
        
    }
};