#include <bits/stdc++.h>
using namespace std;
// METHOD 1:
void skipAchar(string originals, string ans)
{
  char c = originals[0];
  if (originals.size() == 0)
  {
    cout << ans;
    return;
  }
  if (c == 'a')
    skipAchar(ans, originals.substr(1));
  else
    (skipAchar(ans += originals[0], originals.substr(1)));
}

// METHOD 2:
void removechar(string original, string ans, int idx)
{
  if (idx == original.size())
  {
    cout << ans;
    return;
  }
  char c = original[idx];
  if (c == 'a')
    removechar(original, ans, idx + 1);
  else
  {
    removechar(original, ans += original[idx], idx + 1);
  }
}
int main()
{
  string s = "aditya";
  string s1 = "";
  skipAchar(s, s1);
  cout << endl;
  removechar(s, s1, 0);
}