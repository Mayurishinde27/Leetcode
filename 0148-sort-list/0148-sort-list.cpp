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
    
    ListNode* findMid(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head -> next;
        
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    
    ListNode* merge(ListNode* left,ListNode* right)
    {
        if(left == NULL){
            return right;
        }
        
        if(right == NULL){
            return left;
        }
        
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;
        while(left != NULL && right != NULL)
        {
            if(left -> val < right -> val)
            {
                temp -> next = left;
                temp = left;
                left = left -> next;
            }
            else
            {
                temp -> next = right;
                temp = right;
                right = right -> next;
            }
            // temp = temp -> next;
        }
        
        while(left != NULL)
        {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        
        while(right != NULL){
                temp -> next = right;
                temp = right;
                right = right -> next;
        }
        
        ans = ans -> next;
        return ans;
  
    }
public:
    ListNode* sortList(ListNode* head)
    {
        // base case
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        // finding the mid of list
        ListNode* mid = findMid(head);
        
        // divide them into parts
        ListNode* left = head;
        ListNode* right = mid -> next;
        mid -> next = NULL;
        
       // recursive call for sorting
        left = sortList(left);
        right = sortList(right);
        
         // merge both list
         ListNode* ans = merge(left,right);
        
        return ans;
    }
};