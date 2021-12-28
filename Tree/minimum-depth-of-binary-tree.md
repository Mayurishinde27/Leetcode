
## [Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/)

----------------------------------------------------------------------

### Problem Statement:
- Given a binary tree, find its minimum depth.

- The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

- Note: A leaf is a node with no children.

----------------------------------------------------

Example 1:

<img width="385" alt="image" src="https://user-images.githubusercontent.com/85113641/147597362-13c5202b-a4e7-4f6a-a913-9159b914e5ac.png">


```
Input: root = [3,9,20,null,null,15,7]
Output: 2

```
 
--------------------------------------------------------------------
### Solution:

```c

  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
 
int min(int *a, int *b)
{
    if(a<b)
        return a;
    else
        return b;
}


int minDepth(struct TreeNode* root)
{
        int ld, rd;
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		ld= minDepth(root->left);
		rd= minDepth(root->right);
        
        if(root->left==NULL)
        {
            return rd+1;
        }
            if(root->right==NULL)
        {
            return ld+1;
        }
		
		return min(ld,rd)+1;

	}

}
```

------------------------------------------------------------------------------------------------------------------------------------------

<img width="800" alt="2021-12-29 00_12_49-(1) Minimum Depth of Binary Tree - LeetCode" src="https://user-images.githubusercontent.com/85113641/147597205-38762517-30af-4903-bbd8-dd1eab64cd5c.png">
