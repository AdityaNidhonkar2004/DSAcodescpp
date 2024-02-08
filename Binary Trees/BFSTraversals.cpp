#include <bits/stdc++.h>
using namespace std;

// NODE CLASS
class Treenode
{
public:
  int val;
  Treenode *right;
  Treenode *left;
  Treenode(int val)
  {
    this->val = val;
    this->right = this->left = NULL;
  }
};
// LEVEL OF BT
int level(Treenode *root)
{
  if (root == NULL)
  {
    return 0;
  }
  return 1 + max(level(root->left), level(root->right));
}

// Nth Level elements get printed from Right to left
void nthlevelRL(Treenode *root, int cnt, int level)
{
  if (cnt == level)
  {
    cout << root->val << " ";
    return;
  }
  nthlevelRL(root->right, cnt + 1, level);
  nthlevelRL(root->left, cnt + 1, level);
}

// Nth Level elements get printed from Left to Right:
void nthlevelLR(Treenode *root, int cnt, int level)
{
  if (cnt == level)
  {
    cout << root->val << " ";
    return;
  }
  nthlevelLR(root->left, cnt + 1, level);
  nthlevelLR(root->right, cnt + 1, level);
}

// traversing the levels
void levelOrder(Treenode *root)
{
  int n = level(root);
  for (int i = 1; i <= n; i++)
  {
    nthlevelLR(root, 1, i); // left to right
    // nthlevelRL(root,1,i); to traverse from right to left
    cout << endl;
  }
}
// BFS IMP !!
void levelOrderQueue(Treenode *root)
{
  queue<Treenode *> q;
  q.push(root);
  while (q.size() != 0)
  {
    Treenode *t = q.front();
    cout << t->val << " ";
    q.pop();
    if (t->left != NULL)
      q.push(t->left);
    if (t->right != NULL)
      q.push(t->right);
  }
}
int main()
{
  Treenode *a = new Treenode(1); // Root
  Treenode *b = new Treenode(2);
  Treenode *c = new Treenode(3);
  Treenode *d = new Treenode(4);
  Treenode *e = new Treenode(5);
  Treenode *f = new Treenode(6);
  Treenode *g = new Treenode(7);
  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->left = f;
  c->right = g;
  // levelOrder(a);
  levelOrderQueue(a);
}