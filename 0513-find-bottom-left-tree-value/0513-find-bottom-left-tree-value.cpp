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
    void rightView(TreeNode* root, int level, vector<int> &right)
    {
        if(root == NULL)
        {
            return;
        }
        if(level == right.size())
        {
            right.push_back(root->val);
        }
        rightView(root->left,level+1,right);
        rightView(root->right,level+1,right);
        
    }
    int findBottomLeftValue(TreeNode* root) {
        vector<int> right;
        rightView(root,0,right);
        int n = right.size();
        return right[n-1];
    }
};