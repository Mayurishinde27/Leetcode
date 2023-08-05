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
    int MAX(TreeNode* root)
    {
        while(root -> right != NULL)
        {
            root = root -> right;
        }
        return root -> val;
    }
    int MIN(TreeNode* root)
    {
        while(root -> left != NULL)
        {
            root = root -> left;
        }
        return root -> val;
    }
public:
    bool isValidBST(TreeNode* root)
    {
        if(root == NULL) return 1;
        if(root -> left == NULL && root-> right == NULL)
        {
            return 1;
        }
        else if(root -> left == NULL)
        {
            if(root->val<MIN(root->right) && isValidBST(root->right))
            {
                return 1;
            }
        }
        else if(root -> right == NULL)
        {
            if(root->val>MAX(root->left) && isValidBST(root->left))
            {
                return 1;
            }
        }
        else
        {
            if(isValidBST(root -> left) && isValidBST(root -> right))
            {
                if(root->val>MAX(root->left) && root->val<MIN(root->right)){
                    return 1;
                }
            }
        }
        return 0;
        
    }
};