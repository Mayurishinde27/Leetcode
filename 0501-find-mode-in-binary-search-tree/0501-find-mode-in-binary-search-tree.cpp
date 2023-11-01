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
    
    vector<int>v;
    int maxi = 0;
    map<int,int>mp;
    void inorder(TreeNode* root)
    {
        if(root == NULL){
            return;
        }
        
        inorder(root->left);
        mp[root->val]++;
        
        int curr = mp[root->val];
        
        
        if(curr > maxi)
        {
            maxi = curr;
            v.clear();
            v.push_back(root->val);
        }
        else if(curr == maxi){
            v.push_back(root->val);
        }
        inorder(root->right);
    }
public:
    vector<int> findMode(TreeNode* root)
    {
        inorder(root);
        return v;
    }
};