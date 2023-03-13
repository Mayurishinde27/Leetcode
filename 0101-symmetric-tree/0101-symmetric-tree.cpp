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
    int tree(TreeNode* root1,TreeNode* root2)
    {
        if(root1==NULL && root2==NULL)
        {
            return 1;
        }
        if(root1 == NULL || root2==NULL)
        {
            return 0;
        }
        if(root1->val==root2->val)
        {
            return tree(root1->left,root2->right) && tree(root1->right,root2->left);
        }
        return 0;
    }
    bool isSymmetric(TreeNode* root)
    {
        if(root == NULL)
        {
            return root;
        }
        
        return tree(root->left,root->right);
       
    }
};