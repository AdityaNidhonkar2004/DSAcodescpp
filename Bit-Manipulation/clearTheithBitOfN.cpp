#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int i;
  cin >> i; // ith bit to set it to 0 or clear it
  int mask = ~(1 << i);
  n = n & mask;
  cout << n;
}