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
// PREORDER TRAVERSAL:
void preorder(Treenode *root)
{
  if (root == NULL)
    return;
  cout << root->val << " "; // kaam
  preorder(root->left);     // all left nodes ->Left Recurrsion
  preorder(root->right);    // all right nodes ->Right Recurrsion
}

// INORDER TRAVERSAL:
void inorder(Treenode *root)
{
  if (root == NULL)
    return;
  inorder(root->left);      // all left nodes ->Left Recurrsion
  cout << root->val << " "; // kaam
  inorder(root->right);     // all right nodes ->Right Recurrsion
}

// POSTORDER TRAVERSAL:
void postorder(Treenode *root)
{
  if (root == NULL)
    return;
  postorder(root->left);    // all left nodes ->Left Recurrsion
  postorder(root->right);   // all right nodes ->Right Recurrsion
  cout << root->val << " "; // kaam
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
  preorder(a);
  cout << endl;
  inorder(a);
  cout << endl;
  postorder(a);
  cout << endl;
}