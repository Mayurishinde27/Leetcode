/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode* run = head;
    
    if(head == NULL || head -> next == NULL)
    {
        return head;
    }
    
    while(run -> next != NULL)
    {
        if(run -> val == run -> next -> val)
        {
            run -> next = run -> next -> next;
        }
        else
        {
            run = run -> next;
        }
    }

    return head;
    



}