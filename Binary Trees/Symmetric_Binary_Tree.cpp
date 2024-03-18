Q-Link:https://leetcode.com/problems/symmetric-tree/description/
Question:
 Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

Appoarch:
-Here we will use two pointers one will go  to left and another ot right.
-The traversal of left pointer will be Root-Left-Right while traversal for right will be Root-Right-Left both pointers will move  simultaneously.
-At each instance we will check whether its values and if not equal then, return false. 

Solution:
class Solution
{
public:
  bool isSymmetric(TreeNode *rootl, TreeNode *rootr)
  {
    if (rootl == NULL || rootr == NULL)
      return rootl == rootr;
    if (rootl->val != rootr->val)
      return false;
    return isSymmetric(rootl->left, rootr->right) && isSymmetric(rootl->right, rootr->left);
  }

  bool isSymmetric(TreeNode *root)
  {
    return isSymmetric(root->left, root->right);
  }
};