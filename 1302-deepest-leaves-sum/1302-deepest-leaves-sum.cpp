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
    
 vector<vector<int>> v;
    
    void LevelOrder(TreeNode* root,int height)
    {
        if(root == NULL)
        {
            return;
        }
        if(v.size() == height)
        {
            v.push_back(vector<int>());
        }
        v[height].push_back(root -> val);
        LevelOrder(root -> left,height + 1);
        LevelOrder(root -> right,height + 1);
    }
    
    int deepestLeavesSum(TreeNode* root)
    {
        LevelOrder(root,0);
        int maxr = v.size()-1;
        int maxc = v[maxr].size();
        int sum = 0;
        for(int i = 0; i<maxc; i++)
        {
            sum += v[maxr][i];
        }
        return sum;
    }
};