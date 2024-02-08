#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
  int temp = n;
  int res = 0;
  priority_queue<int> pq;
  while (temp > 0)
  {
    int ld = temp % 10;
    pq.push(ld);
    temp /= 10;
  }
  return pq.top();
}

int main()
{
  int n;
  cin >> n;
  int ans = 0;
  while (n != 0)
  {
    int x = f(n);
    n -= x;
    ans++;
  }
  cout << ans << endl;
}