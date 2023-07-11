/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void Parents(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent_track, TreeNode* target)
    {
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            
            if(temp -> left != NULL)
            {
                parent_track[temp -> left] = temp;
                q.push(temp -> left);
            }
            if(temp -> right != NULL)
            {
                parent_track[temp -> right] = temp;
                q.push(temp -> right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k)
    {
        
        unordered_map<TreeNode*, TreeNode*> parent_track;
        Parents(root,parent_track,target);
        
        unordered_map<TreeNode*, bool> vis;
        queue<TreeNode*> q;
        
        q.push(target);
        vis[target] = true;
        int steps = 0;
        
        vector<int> ans;
        while(!q.empty())
        {

            int size = q.size();
            if(steps == k) break;
            steps++;
            for(int i = 0; i<size; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp -> left != NULL && !vis[temp -> left]){
                    q.push(temp -> left);
                    vis[temp->left] = true;
                }
                if(temp -> right != NULL && !vis[temp -> right]){
                    q.push(temp -> right);
                    vis[temp->right] = true;
                }
                if(parent_track[temp] != NULL && !vis[parent_track[temp]])
                {
                    q.push(parent_track[temp]);
                    vis[parent_track[temp]] = true;
                }
            }
        }
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            ans.push_back(temp->val);
        }
        return ans;
    }
};