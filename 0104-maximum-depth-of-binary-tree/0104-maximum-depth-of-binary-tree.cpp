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
    int maxHeight(TreeNode* root)
    {
        if(root == NULL){
            return 0;
        }
        int lh = maxHeight(root->left);
        int rh = maxHeight(root->right);
        
        return max(lh,rh)+1;
    }
public:
    int maxDepth(TreeNode* root)
    {
        // int height = 0;
        return maxHeight(root);
        // return height;
        
    }
};