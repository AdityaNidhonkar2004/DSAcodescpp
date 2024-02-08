#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(-1); //-1,-8,0,5,-7
  v.push_back(-8);
  v.push_back(0);
  v.push_back(5);
  v.push_back(-7);
  int n = v.size();
  sort(v.begin(), v.end());
  int suf[n];
  suf[n - 1] = v[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    suf[i] = suf[i + 1] + v[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << suf[i] << " ";
  }
  cout << endl;
  int idx = -1;
  for (int i = 0; i < n; i++)
  {
    if (suf[i] >= 0)
    {
      idx = i;
      break;
    }
  }
  if (idx == -1)
    cout << 0;
  int ans = 0;
  int j = 1;
  for (int i = idx; i < n; i++)
  {
    ans += (v[i] * j);
    j++;
  }
  cout << ans;
}
