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
    
    void makeMatrix(vector<vector<int>>& matrix,int m, int n, ListNode* head)
    {
        int left = 0;    
        int right = n-1;  
        int top = 0;  
        int bottom = m-1;  
        
        int direction = 1;
        
        // int ptr = 0;
        
        while(left <= right && top <= bottom)
        {
            // left->right
            if(direction == 1)
            {
                for(int i = left; i<=right; i++)
                {
                    if(head)
                    {
                        matrix[top][i] = head->val;
                        head = head -> next;
                    }
                }
                top++;
                
                direction = 2;
            }

            // top -> bottom
            else if(direction == 2){
                for(int i = top; i<=bottom; i++)
                {
                    if(head)
                    {
                        matrix[i][right] = head->val;
                        head = head -> next;
                    }
                }
                right--;
                direction = 3;
            }

            // right -> left

            else if(direction == 3){
                for(int i = right; i>= left; i--)
                {
                    if(head)
                    {
                        matrix[bottom][i] = head->val;
                        head = head -> next;
                    }
                }
                bottom --;
                direction = 4;
            }

            // bottom -> top
            else if(direction == 4){
                for(int i = bottom; i>= top; i--)
                {
                    if(head)
                    {
                        matrix[i][left] = head->val;
                        head = head -> next;
                    }
                }
                left++;
                direction = 1;
            }
        }
        
    }
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head)
    {
        
        vector<vector<int>> matrix(m,vector<int>(n,-1));
        if(head == NULL) return matrix;

        makeMatrix(matrix,m,n,head);
        
        return matrix;
        
    }
};









