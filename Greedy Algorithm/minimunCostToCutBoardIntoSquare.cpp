// TC -> O(nlogn+mlogm)
// SC -> O(1)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll minicost(int m, int n, vector<int> &vertical, vector<int> &horizontal)
{
  sort(vertical.rbegin(), vertical.rend());
  sort(horizontal.rbegin(), horizontal.rend());
  int hz = 1;
  int vr = 1;
  int h = 0, v = 0;
  ll ans = 0;
  while (h < horizontal.size() && v < vertical.size())
  {
    if (vertical[v] > horizontal[h])
    {
      ans += vertical[v] * vr;
      hz++;
      v++;
    }
    else
    {
      ans += horizontal[h] * hz;
      vr++;
      h++;
    }
  }
  while (h < horizontal.size())
  {
    ans += horizontal[h] * hz;
    vr++;
    h++;
  }
  while (v < vertical.size())
  {
    ans += vertical[v] * vr;
    hz++;
    v++;
  }
  return ans;
}
int main()
{
  vector<int> vertical = {2, 1, 3, 1, 4};
  vector<int> horizonal = {4, 1, 2};
  int n = 4, m = 6;
  cout << minicost(m, n, vertical, horizonal);
}