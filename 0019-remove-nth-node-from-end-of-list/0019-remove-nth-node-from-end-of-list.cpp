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
        int count = 1;
        
        ListNode * run = head;
        
        while(run -> next != NULL)
        {
            run = run -> next;
            count++;
        }
        
        if(count == n){
            return head -> next;
        }
        
        int pos = count - n;
        
        ListNode * ptr = head;
        for(int i = 1; i<pos; i++)
        {
            ptr = ptr -> next;
        }
        ptr -> next = ptr -> next -> next;
        
        return head;
        
    }
};