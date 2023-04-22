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
    
    void right_view(TreeNode* root, int level,vector<int> &v)
    {
        if(root == NULL)
        {
            return;
        }
        
        if(level == v.size())
        {
            v.push_back(root->val);
        }
        
        right_view(root -> right, level+1,v);
        right_view(root -> left, level+1,v);
       
            
    }
    vector<int> rightSideView(TreeNode* root)
    {
        vector<int> ans;
        right_view(root,0,ans);
        return ans;
        
    }
};