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
    int maxLevelSum(TreeNode* root)
    {
        queue<TreeNode*> q;
        q.push(root);
        priority_queue<pair<int,int>> pq;
        int level = 0;
        int flag = 1;
        while(!q.empty())
        {
            int size = q.size();
            long long add = 0;
            level++;
            for(int i = 0; i<size; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                add += temp -> val;
                if(temp -> left != NULL)
                {
                    q.push(temp->left);
                }
                
                if(temp -> right != NULL)
                {
                    q.push(temp->right);
                }
                
            }
            
            if(!pq.empty()){
            if(add == pq.top().first)
            {
                flag++;
            }
            }
            pq.push({add,level});
        }
        
        if(flag == pq.size())
        {
            return 1;
        }
        int ans = pq.top().second;
        return ans;
        
    }
};