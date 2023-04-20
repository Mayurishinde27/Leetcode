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
    
    int height(TreeNode* root,int& dia)
    {
        int lh,rh,diameter;

        if(root==NULL)
        {
            return 0;
        }
        
        rh = height(root->right,dia);
        lh = height(root->left,dia);
        diameter = lh+rh;

        dia = max(diameter,dia);

        return max(rh,lh)+1;


    }

    int diameterOfBinaryTree(TreeNode* root)
    {
        int dia=0;
        height(root,dia);
        return dia;
    }
};