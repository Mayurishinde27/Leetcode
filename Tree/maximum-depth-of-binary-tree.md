
## [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)

----------------------------------------------------------------------

### Problem Statement:
- Given the root of a binary tree, return its maximum depth.

- A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

----------------------------------------------------

Example 1:

<img width="385" alt="image" src="https://user-images.githubusercontent.com/85113641/147597362-13c5202b-a4e7-4f6a-a913-9159b914e5ac.png">


```
Input: root = [3,9,20,null,null,15,7]
Output: 3

```
 
--------------------------------------------------------------------
### Solution:

```c

  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
 
int maxDepth(struct TreeNode* root)
{
    int ld, rd;
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		ld=maxDepth(root->left);
		rd=maxDepth(root->right);
		
		if(ld>rd)
		return ld+1;
		else
		return rd+1;
	}

}
```

------------------------------------------------------------------------------------------------------------------------------------------

<img width="800" alt="2021-12-28 19_23_19-(1) Maximum Depth of Binary Tree - LeetCode" src="https://user-images.githubusercontent.com/85113641/147597571-0794eac6-516e-4281-92e9-36a9746b40c1.png">


