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
    int maxi = 0;
    int dfs(TreeNode* root,map<int,int> &mp){
        if(root == NULL){
            return 0;
        }
        
        int left_sum = dfs(root->left,mp);
        int right_sum = dfs(root->right,mp);
        
        int ans = left_sum + right_sum + root->val;
        
        mp[ans]++;
        maxi = max(maxi,mp[ans]);

        return ans;
    }
    vector<int> findFrequentTreeSum(TreeNode* root)
    {
        map<int,int> mp;
        dfs(root,mp);
        vector<int> v;
        for(auto x:mp)
        {
            if(x.second == maxi)
            {
                v.push_back(x.first);
            }
        }
        return v;
        
    }
};