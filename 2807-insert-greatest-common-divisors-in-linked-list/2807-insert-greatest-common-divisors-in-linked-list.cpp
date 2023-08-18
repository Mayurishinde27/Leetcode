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
    
//     void insertNode (ListNode* head, int val1, int val2, int pos)
//     {
//         int data = gcd(val1, val2);
        
//         ListNode* ptr = new ListNode(data);
//         ListNode* run = head;
        
//         for(int i = 0; i<pos-1; i++)
//         {
//             run = run -> next;
//         }
        
//         ptr -> next = run -> next;
//         run -> next = ptr;
//     }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head)
    {
        if(head == NULL || head -> next == NULL) return head;
        ListNode* run1 = head;
        ListNode* run2 = head->next;
        while(run1-> next != NULL && run1 != NULL )
        {
            int val1 = run1 -> val;
            int val2 = run2 -> val;
            int data = gcd(val1, val2);
        
            ListNode* ptr = new ListNode(data);
            
            run1 -> next = ptr;
            ptr -> next = run2;
            
            run1 = run1 -> next -> next;
            run2 = run2 -> next;

        }
        
        return head;
    }
};