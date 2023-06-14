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
    long long kthLargestLevelSum(TreeNode* root, int k)
    {
        // vector<int> sum;
        if(root == NULL)
        {
            return -1;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        priority_queue<long long> pq;
        while(!q.empty())
        {
            int size = q.size();
            long long add = 0;
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
            
            
            // sum.push_back(add);
            pq.push(add);
        }
        
        // sort(sum.begin(),sum.end());
        
        if(k> pq.size())
        {
            return -1;
        }
        long long ans;
        while(k--)
        {
            ans = pq.top();
            pq.pop();
        }
        return ans;
    }
};