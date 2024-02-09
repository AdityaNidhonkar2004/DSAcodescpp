// link:-https://leetcode.com/problems/balanced-binary-tree/description/
//  Given a binary tree, determine if it is
//  height-balanced

// Example 1:

// Input: root = [3,9,20,null,null,15,7]
// Output: true

// Solution:
class Solution
{
public:
  int level(TreeNode *t1)
  {
    if (t1 == NULL)
      return 0;
    return 1 + max(level(t1->left), level(t1->right));
  }
  void nthlevel(TreeNode *r, int cnt, int level, vector<int> &v)
  {
    if (r == NULL)
      return;
    if (cnt == level)
    {
      v.push_back(r->val);
      return;
    }
    nthlevel(r->left, cnt + 1, level, v);
    nthlevel(r->right, cnt + 1, level, v);
    return;
  }
  vector<vector<int>> zigzagLevelOrder(TreeNode *root)
  {
    int l = level(root);
    cout << l << endl;
    vector<vector<int>> ans;
    for (int i = 1; i <= l; i++)
    {
      vector<int> v;
      nthlevel(root, 1, i, v);
      if (i % 2 == 0)
      {
        reverse(v.begin(), v.end());
        ans.push_back(v);
      }
      else
      {
        ans.push_back(v);
      }
    }
    return ans;
  }
};