#include <bits/stdc++.h>
using namespace std;
bool p(string &ans, int i, int j)
{
  if (i > j)
    return true;
  if (ans.size() == 0)
    return true;
  if (ans[i] != ans[j])
    return false;
  return p(ans, i + 1, j - 1);
}
int main()
{
  string s = "race";
  string ans = "";
  for (int i = 0; i > s.size(); i++)
  {
    if (s[i] <= 'a' && s[i] >= 'z')
    {
      ans = ans + s[i];
    }
  }
  cout << ans << endl;
  cout << p(ans, 0, ans.size() - 1);
}
