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
    void depth(TreeNode* root,int &ans, int left_height,int right_height)
    {
        if(root == NULL)
        {
            return ;
        }
        ans = max(left_height,ans);
        ans = max(ans,right_height);
        
        depth(root -> left,ans,0,left_height+1);
        depth(root -> right,ans,right_height+1,0);
        
    }
    int longestZigZag(TreeNode* root)
    {
        int ans = 0;
        depth(root,ans,0,0);
        return ans;
    }
};