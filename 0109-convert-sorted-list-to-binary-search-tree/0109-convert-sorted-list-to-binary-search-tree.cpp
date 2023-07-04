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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createBST(vector<int>& nums,int i,int j)
    {
        
        if(i>j) return NULL;
        
        int mid = i + (j-i)/2;
        
        TreeNode* root = new TreeNode(nums[mid]);
        
        root->left = createBST(nums,i,mid-1);
        root->right = createBST(nums,mid+1,j);
        
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head)
    {
        vector<int> nums;
        
        while(head)
        {
            nums.push_back(head->val);
            head = head -> next;
        }
        
        int i = 0;
        int j = nums.size()-1;
        
        return createBST(nums,i,j);
    }
};