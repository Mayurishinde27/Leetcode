/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* run = head;
            
        while(fast!=NULL && fast->next!= NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                while(run != slow)
                {
                    run = run -> next;
                    slow = slow -> next;
                }
                
                return run;    
            }
        }
        return NULL;
        
    }
};