#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a = 4, b = 8; // XOR in range[4,8]
  int x, y;
  // x-> xor of all numbers till 8
  // y-> xor of all numbers till 3
  //  x^y-> 3^4^5^6^7^8 as repeating numbers will get removed
  if ((a - 1) % 4 == 0)
    x = (a - 1);
  else if ((a - 1) % 4 == 1)
    x = 1;
  else if ((a - 1) % 4 == 2)
    x = a;
  else if ((a - 1) % 4 == 3)
    x = 0;
  if (b % 4 == 0)
    y = (b - 1);
  else if (b % 4 == 1)
    y = 1;
  else if (b % 4 == 2)
    y = b;
  else if (b % 4 == 3)
    y = 0;
  int ans = x ^ y;
  cout << ans;
}