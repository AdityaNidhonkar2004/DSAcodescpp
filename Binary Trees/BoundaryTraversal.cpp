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

// Construct
Treenode *construct(int arr[], int n)
{
  queue<Treenode *> q;
  Treenode *root = new Treenode(arr[0]);
  q.push(root);
  int i = 1, j = 2;
  while (q.size() > 0 && i < n)
  {
    Treenode *temp = q.front();
    q.pop();
    Treenode *l;
    Treenode *r;
    if (arr[i] != INT_MIN)
      l = new Treenode(arr[i]);
    else
      l = NULL;
    if (j != n && arr[j] != INT_MIN)
      r = new Treenode(arr[j]);
    else
      r = NULL;

    temp->left = l;
    temp->right = r;

    if (l != NULL)
      q.push(l);
    if (r != NULL)
      q.push(r);

    i += 2;
    j += 2;
  }
  return root;
}

void leftboundary(Treenode *root)
{
  if (root == NULL)
  {
    return;
  }
  if (root->left != NULL && root->right != NULL)
    cout << root->val << " ";
  leftboundary(root->left);
  if (root->left == NULL)
    leftboundary(root->right);
}

void bottomboundary(Treenode *root)
{
  if (root == NULL)
  {
    return;
  }
  if (root->left == NULL && root->right == NULL)
    cout << root->val << " ";
  bottomboundary(root->left);
  bottomboundary(root->right);
}

void rightboundary(Treenode *root)
{
  if (root == NULL)
  {
    return;
  }
  if (root->left == NULL && root->right == NULL)
    return;

  rightboundary(root->right);
  if (root->right == NULL)
    rightboundary(root->left);
  cout << root->val << " ";
}

int main()
{
  // Construct
  int arr[] = {1, 2, 3, 4, 5, INT_MIN, 6, INT_MIN, INT_MIN, 7, 8, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  Treenode *root = construct(arr, n);
  cout << "Left boundary:";
  leftboundary(root);
  cout << endl;
  cout << "Bottom boundary:";
  bottomboundary(root);
  cout << endl;
  cout << "Right boundary:";
  rightboundary(root->right);
}