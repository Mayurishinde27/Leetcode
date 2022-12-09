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
    vector<vector<int>> vec;
    
    void LevelOrder(TreeNode* root,int height)
    {
        if(root == NULL)
        {
            return;
        }
        if(vec.size() == height)
        {
            vec.push_back(vector<int>());
        }
        vec[height].push_back(root -> val);
        LevelOrder(root -> left,height + 1);
        LevelOrder(root -> right,height + 1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root)
    {
        LevelOrder(root,0);
        reverse(vec.begin(),vec.end());
        return vec;
    }
};