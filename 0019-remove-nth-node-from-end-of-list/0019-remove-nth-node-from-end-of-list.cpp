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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* run = head;
        ListNode* ptr = head;
        int count = 0;
        while(run!=NULL)
        {
            run = run -> next;
            count++;
        }
        
        if(count == n)
        {
            return head->next;
        }
        
        int pos = count - n; //5-2 = 3
        // if(pos<=0)
        // {
        //     return NULL;
        // }
        // if(head->next == NULL)
        // {
        //     if(n==1)
        //     {
        //         return head;
        //     }
        //     if(n==2)
        //     {
        //         return head->next;
        //     }
        // }
        for(int i = 1; i < pos; i++)
        {
            ptr = ptr -> next;
        }
        ptr -> next = ptr ->next -> next;
        return head;
    }
};