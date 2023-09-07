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
//     ListNode* reverseList(ListNode* head,int left,int right)
//     {
//         int cnt = left;
//         ListNode* dummy = NULL;
//         ListNode* curr = head;
        
//         while(cnt != right)
//         {
//             ListNode* temp = curr -> next;
//             curr -> next = dummy;
//             dummy = curr;
//             curr = temp;
//             cnt++;
//         }
        
//         return dummy;
        
//     }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right)
    {
        ListNode* temp = head;
        vector<int> v;
        
        for(int i = 1; i<left; i++)
        {
            temp = temp -> next;
        }
        ListNode* left_ptr = temp;
        for(int i = 0; i<(right-left+1); i++)
        {
            v.push_back(left_ptr -> val);
            left_ptr = left_ptr -> next;
        }
        
        reverse(v.begin(),v.end());
        for(int i = 0; i<v.size(); i++)
        {
            temp -> val = v[i];
            temp = temp ->next;
        }
        return head;
//         ListNode* left_ptr = head;
//         ListNode* right_ptr_next = head;
//         int count = 1;
//         while(temp != NULL)
//         {
//             if(left!= 1 && count == left)
//             {
                
//                 temp -> next = reverseList(left_ptr,left,right);
//             }
            
//             left_ptr = left_ptr -> next;
//             count++;
//         }
//         temp = head;
//         int cnt = 1;
//         while(cnt != right+1)
//         {
//             cnt++;
//             right_ptr_next = right_ptr_next -> next;
//         }
        // while(temp != NULL)
        // {
        //     if(count == right)
        //     {
        //         right_ptr_next = right_ptr_next -> next;
        //     }
        //     right_ptr_next = right_ptr_next -> next;
        //     count++;
        // }

    }
};