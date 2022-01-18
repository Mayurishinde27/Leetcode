
## [Insert into a Binary Search Tree](https://leetcode.com/problems/insert-into-a-binary-search-tree/)

### Problem Statement:
- You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.

- Notice that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.

 
--------------------------------------------------------------------
### Solution :

```c

  Definition for a binary tree node.
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
 

struct TreeNode* insertIntoBST(struct TreeNode* root, int val)
{
    if(root==NULL)
    {
        struct TreeNode* temp=root;
        temp=(struct TreeNode*)malloc(sizeof(struct TreeNode));
        temp->val=val;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
    }
    else if(val<=root->val)
    {
        root->left=insertIntoBST(root->left,val);
    }
    else 
    {
        root->right=insertIntoBST(root->right,val);
    }
    return root;

}
```

------------------------------------------------------------------------------------------------------------------------------------------

<img width="800" alt="image" src="https://user-images.githubusercontent.com/85113641/147596027-95220d18-0a20-487b-9814-46ad4c5f8c01.png">
