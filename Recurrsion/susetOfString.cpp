#include <bits/stdc++.h>
using namespace std;
// METHOD 1:
void subsets(string ans, string original)
{
  if (original.size() == 0)
  {
    cout << ans << endl;
    return;
  }
  char c = original[0];
  subsets(ans, original.substr(1));
  subsets(ans + c, original.substr(1));
}

// METHOD 2:
void subs(string original, string ans, int idx)
{
  if (idx == original.size())
  {
    cout << ans << endl;
    return;
  }
  subs(original, ans, idx + 1);
  subs(original, ans + original[idx], idx + 1);
}

// STORING SUBSETS IN VECTOR
void storeSubsets(string ans, string original, vector<string> &v)
{
  if (original.size() == 0)
  {
    v.push_back(ans);
    return;
  }
  char c = original[0];
  storeSubsets(ans, original.substr(1), v);
  storeSubsets(ans + c, original.substr(1), v);
}
int main()
{
  vector<string> v;
  string s = "abc";
  string ans = "";
  subsets(ans, s);
  cout << endl;
  subs(s, ans, 0);
  cout << endl;
  storeSubsets(s, ans, v);
}