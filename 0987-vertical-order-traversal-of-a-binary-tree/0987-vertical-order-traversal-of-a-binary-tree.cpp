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
    vector<vector<int>> verticalTraversal(TreeNode* root)
    {
        vector<vector<int>> ans;
        vector<int> v;
        
        map<int,map<int,multiset<int>>> mp;  // line->level->node.val
        queue<pair<TreeNode*,pair<int,int>>> q;  // node,{line,level}
        q.push({root,{0,0}});
        
        while(!q.empty())
        {
            TreeNode* node = q.front().first;
            auto line = q.front().second.first;
            auto level = q.front().second.second;
            q.pop();
            
            
            mp[line][level].insert(node->val);
            
            if(node -> left != NULL)
            {
                q.push({node -> left,{line-1,level+1}});
            }
                        
            if(node -> right != NULL)
            {
                q.push({node -> right,{line+1,level+1}});
            }
        }
        
        for(auto x: mp)
        {
            vector<int> v;
            for(auto it: x.second)
            {
                v.insert(v.end(),it.second.begin(),it.second.end());
            }
            ans.push_back(v);
        }
        return ans;
    }
};







