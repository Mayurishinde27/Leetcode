/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> v;
    void level(Node* root,int height)
    {
        if(root == NULL)
        {
            return;
        }
        
        if(height == v.size())
        {
            v.push_back(vector<int>());
        }
        v[height].push_back(root->val);
        
        for(int i = 0; i<root->children.size(); i++)
        {
            level(root->children[i],height+1);
        }
        
    }
    vector<vector<int>> levelOrder(Node* root)
    {
        level(root,0);
        return v;
        
    }
};