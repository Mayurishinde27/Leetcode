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
    int search(vector<int>&inorder, int start, int end, int cur)
    {
        for(int i = start; i<= end; i++)
        {
            if(cur == inorder[i]){
                return i;
                break;
            }
        }
        return -1;
    }
    
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int &idx, int start, int end)
    {
        if(start > end)
        {
            return NULL;
        }
        // static int idx = 0;
        int cur = preorder[idx];
        idx++;
        TreeNode * node = new TreeNode(cur);  // add root
        
        if(start == end) return node;  // if there is only one element in inorder
        
        int pos = search(inorder,start,end,cur);
        
        node -> left = build(preorder,inorder,idx,start,pos-1);
        node -> right = build(preorder,inorder,idx,pos+1,end);
        
        return node;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
    {
        int idx = 0;
        int n = inorder.size();
        return build(preorder,inorder,idx,0,n-1);
    }
};