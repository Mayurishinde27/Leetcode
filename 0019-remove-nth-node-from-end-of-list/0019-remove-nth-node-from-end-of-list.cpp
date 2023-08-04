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
        ListNode * dummy = new ListNode();
        dummy -> next = head;
        ListNode * slow = dummy;
        ListNode * fast = dummy;
        
        for(int i = 1; i<=n; i++)
        {
            fast = fast -> next;
        }
        
        while(fast -> next != NULL)
        {
            fast = fast -> next;
            slow = slow -> next;
        }

        slow -> next = slow -> next -> next;
        
        return dummy->next;
        
        // TC - O(N)  {O(N)-if we need to delete the last node of the linked list the we have to travel the entire linked list again}
        //SC-O(1)
        
    }
};