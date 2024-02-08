#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
  for (int i = 2; i * i <= x; i++)
  {
    if (x % i == 0)
      return false;
  }
  return true;
}
int main()
{
  int n;
  cin >> n;
  if (n == 0 || n == 1)
    return 0;
  int cnt = 0;
  for (int i = 2; i < n; i++)
  {
    if (isPrime(i) == true)
    {
      cnt++;
    }
  }
  cout << cnt;
}