#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    v.push_back(a);
  }
  int max = INT_MIN;
  int idx;
  for (int i = 0; i < n; i++)
  {
    if (max < v[i])
    {
      max = v[i];
      idx = i;
    }
  }
  int cnt = 0;
  int x = 0, y = 0;
  while (x < n)
  {
    if (v[y] == max)
    {
      y++;
      cnt++;
    }
    else
    {
      x++;
      y = x;
    }
  }
  cout << cnt;
}
