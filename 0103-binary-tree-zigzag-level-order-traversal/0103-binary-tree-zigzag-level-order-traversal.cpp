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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        LevelOrder(root,0);
        for(int i =0; i<vec.size(); i++)
        {
            for(int j = 0; j<vec[0].size(); j++)
            {
                if(i%2 != 0)
                {
                    reverse(vec[i].begin(),vec[i].end());
                }
            }
        }
        return vec;
    }
};