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
        if(root == NULL)
        {
            return root;
        }
        int data = root -> val;
        int start = p -> val;
        int end = q -> val;
        
        if(data == start || data == end)
        {
            return root;
        }
        TreeNode* t1 = lowestCommonAncestor(root -> left, p,q);
        TreeNode* t2 = lowestCommonAncestor(root->right, p,q);
        
        if(t1 != NULL && t2 != NULL)
        {
            return root;
        }
        
        return t1 != NULL ? t1 : t2;

    }
};