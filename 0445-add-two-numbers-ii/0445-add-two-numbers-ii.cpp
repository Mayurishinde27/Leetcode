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
    
    ListNode* reverse(ListNode* &head)
    {
        ListNode* temp = NULL;
        
        while(head != NULL)
        {
            ListNode* after = head -> next;
            head -> next = temp;
            temp = head;
            head = after;
        }
        return temp;
    }
    
    ListNode * GetNode(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        
        int carry = 0;

        while(l1 != NULL || l2 != NULL || carry)
        {
            int sum = 0;
            
            if(l1 != NULL){
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2 != NULL){
                sum += l2 -> val;
                l2 = l2 -> next;
            }
            
            sum += carry;
            carry = sum / 10;
            ListNode* node = new ListNode(sum % 10);
            temp -> next = node;
            temp = temp -> next;
        }
        
        return dummy -> next;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* node1 = reverse(l1);
        ListNode* node2 = reverse(l2);
        ListNode* ans = GetNode(node1, node2);
        
        return reverse(ans);
    }
};