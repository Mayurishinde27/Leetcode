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
    void hasPathSum(TreeNode* root, int targetSum,vector<int>& v,vector<vector<int>> &ans)
    {
        if(root == NULL)
        {
            return ;
        }
        targetSum -= root -> val;
        v.push_back(root -> val);
        if(targetSum == 0 && root->left==NULL && root->right==NULL)
        {
            ans.push_back(v);
        }
        hasPathSum(root->left,targetSum,v,ans);
        hasPathSum(root->right,targetSum,v,ans);
        
        v.pop_back();
   
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum)
    {
        vector<int> v;
        vector<vector<int>> ans;
        hasPathSum(root,targetSum,v,ans);
        return ans;
    }
};