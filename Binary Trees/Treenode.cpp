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

// DISPLAY TREE
void display(Treenode *root)
{
  if (root == NULL)
    return;
  cout << root->val << " "; // kaam
  display(root->left);      // all left nodes ->Left Recurrsion
  display(root->right);     // all right nodes ->Right Recurrsion
}

// SUM OF ELEMENTS OF NODE
int sum(Treenode *root)
{
  if (root == NULL)
  {
    return 0;
  }
  return root->val + sum(root->left) + sum(root->right);
}

// SIZE OF NODE
int sizeofBT(Treenode *root)
{
  if (root == NULL)
    return 0;
  return 1 + sizeofBT(root->left) + sizeofBT(root->right);
}

// MAXIMUM OF BT
int maxi(Treenode *root)
{
  if (root == NULL)
    return INT_MIN;
  return max(root->val, max(maxi(root->left), maxi(root->right)));
}

// PRODUCT OF ELEMENTS OF NODE
int product(Treenode *root)
{
  if (root == NULL)
  {
    return 1;
  }
  return root->val * product(root->left) * product(root->right);
}

// MINIMUM OF BT
int mini(Treenode *root)
{
  if (root == NULL)
  {
    return INT_MAX;
  }
  return min(root->val, min(mini(root->left), mini(root->right)));
}

// LEVEL OF TREE
int level(Treenode *root)
{
  if (root == NULL)
  {
    return 0;
  }
  return 1 + max(level(root->left), level(root->right));
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
  display(a);
  cout << endl;
  cout << sum(a);
  cout << endl;
  cout << sizeofBT(a);
  cout << endl;
  cout << maxi(a);
  cout << endl;
  cout << product(a);
  cout << endl;
  cout << mini(a);
  cout << endl;
  cout << level(a);
}