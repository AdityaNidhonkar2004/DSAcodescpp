#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n = 15;
  // using built in function to find no of set bits
  cout << __builtin_popcount(n) << endl;
  // Logic behind it
  int cnt = 0;
  while (n > 0)
  {
    cnt++;
    n = (n & n - 1);
  }
  cout << cnt;
}