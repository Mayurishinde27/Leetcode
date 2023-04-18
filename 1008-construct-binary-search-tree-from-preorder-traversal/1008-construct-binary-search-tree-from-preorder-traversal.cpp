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
    
    TreeNode* construct_bst(TreeNode* &root, int data)
    {
        if(root == NULL)
        {
            root = new TreeNode(data);
        }
        else if(data <= root-> val)
        {
            root -> left = construct_bst(root->left,data);
        }
        else
        {
            root -> right = construct_bst(root->right,data);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder)
    {
        TreeNode* root;
        for(int i = 0; i<preorder.size(); i++)
        {
            construct_bst(root,preorder[i]);
        }
        
        return root;
        
    }
};