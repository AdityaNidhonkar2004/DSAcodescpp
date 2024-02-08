#include <bits/stdc++.h>
using namespace std;
int max_pow(int n)
{
  n = n | (n >> 1);
  n = n | (n >> 2);
  n = n | (n >> 4);
  n = n | (n >> 8);
  n = n | (n >> 16);
  return (n + 1) >> 1;
}
int main()
{
  int n = 100, t;
  // using Brian Kerniglans algo
  while (n > 0)
  {
    t = n;
    n = n & n - 1;
  }
  int y = 100;
  cout << t << endl;
  cout << max_pow(y);
}