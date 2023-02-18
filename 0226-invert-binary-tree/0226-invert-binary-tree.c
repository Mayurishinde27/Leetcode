/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* swap(struct TreeNode* root,struct TreeNode* left,struct TreeNode* right)
{
    struct TreeNode* temp;
    temp = root->left;
    root->left = root->right;
    root->right = temp;
    
    return temp;
}

struct TreeNode* invertTree(struct TreeNode* root)
{
    int lh,rh;
    if(root==NULL)
    {
        return root;
    }
    else
    {
        lh=invertTree(root->left);
        rh=invertTree(root->right);
        
        swap(root,root->left,root->right);
    }
 
    return root;

}