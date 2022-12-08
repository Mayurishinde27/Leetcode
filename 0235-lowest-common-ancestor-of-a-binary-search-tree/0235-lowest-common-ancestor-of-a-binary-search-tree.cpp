/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        int data = root -> val;
        int start = p -> val;
        int end = q -> val;
        
        if(start<data && end<data)
        {
            return lowestCommonAncestor(root -> left, p,q);
        }
        else if(start>data && end>data)
        {
            return lowestCommonAncestor(root->right, p,q);
        }
        else
            return root;   
    }
    
};