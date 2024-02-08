#include <bits/stdc++.h>
using namespace std;
int main()
{
  // BRUTE FORCE
  string s = "YYYY";
  int n = s.size();
  int a = INT_MAX;
  int idx;
  for (int i = 0; i <= n; i++)
  {
    int f = i;
    int b = i;
    int ans = 0;
    while (f < n)
    {
      if (s[f] == 'Y')
        ans += 1;
      f++;
    }
    while (b >= 0)
    {
      if (s[b] == 'N')
        ans += 1;
      b--;
    }
    if (ans < a)
    {
      a = ans;
      idx = i;
    }
  }
  cout << idx << endl;
  // OPTIMAL APPROACH LC
  int pre[n + 1];
  int suf[n + 1];
  pre[0] = 0;
  suf[n] = 0;
  // PREFIX OF "N"
  for (int i = 1; i <= n; i++)
  {
    if (s[i - 1] == 'N')
    {
      pre[i] = pre[i - 1] + 1;
    }
    else
    {
      pre[i] = pre[i - 1];
    }
  }
  for (int i = 0; i <= n; i++)
  {
    cout << pre[i] << " ";
  }
  cout << endl;
  // SUFFIX OF "Y"
  for (int i = n - 2; i >= 0; i--)
  {
    if (s[i] == 'Y')
    {
      suf[i] = suf[i + 1] + 1;
    }
    else
    {
      suf[i] = suf[i + 1];
    }
  }
  for (int i = 0; i <= n; i++)
  {
    cout << suf[i] << " ";
  }
  cout << endl;
  int min = INT_MAX;
  // int idx;
  for (int i = 0; i <= n; i++)
  {
    int x = pre[i] + suf[i];
    if (x < min)
    {
      min = x;
      idx = i;
    }
  }
  cout << idx;
}