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
void preorder(Treenode *root)
{
  stack<Treenode *> st;
  st.push(root);
  while (st.size() > 0)
  {
    Treenode *temp = st.top();
    st.pop();
    cout << temp->val << " ";
    if (temp->right != NULL)
      st.push(temp->right);
    if (temp->left != NULL)
      st.push(temp->left);
  }
}
vector<int> postorder(Treenode *root, vector<int> &ans)
{
  stack<Treenode *> st;
  st.push(root);
  while (st.size() > 0)
  {
    Treenode *temp = st.top();
    st.pop();
    ans.push_back(temp->val);
    if (temp->left != NULL)
      st.push(temp->left);
    if (temp->right != NULL)
      st.push(temp->right);
  }
  reverse(ans.begin(), ans.end());
  return ans;
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

  // PREORDER ITERATIVE:
  cout << "PREORDER :";
  preorder(a);
  cout << endl;
  vector<int> ans;
  postorder(a, ans);
  cout << "POSTORDER :";
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}