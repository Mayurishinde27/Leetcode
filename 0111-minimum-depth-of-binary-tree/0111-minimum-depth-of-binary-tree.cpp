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
    
    int depth(TreeNode* root)
    {
        if(root == NULL) return 0;
        
        int lh = depth(root -> left);
        int rh = depth(root -> right);
        
        if(root -> left == NULL) return rh+1;
        if(root -> right == NULL) return lh+1;
        
        return min(lh,rh) + 1;
    }
public:
    int minDepth(TreeNode* root)
    {
        return depth(root);
    }
};