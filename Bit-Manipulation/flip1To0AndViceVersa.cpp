#include <bits/stdc++.h>
using namespace std;
int main()
{
  int y = 17; //(10001)
  // S-1: Max power of 2 less than x
  int x = y;
  x = x | x >> 1;
  x = x | x >> 2;
  x = x | x >> 4;
  x = x | x >> 8;
  x = x | x >> 16;
  cout << x << endl;
  // S-2:Now here we have x=31 -> 2^n-1 wher n> max power of 2 less than x ,so we add by 1 and divide by 2 to x we get req number which is  Max power of 2 less than x
  x = (x + 1) >> 1;
  cout << x << endl;
  // S-3:Now to flip the numbers we multiply it by 2 and XOR it by original number we get the number wiht bits flipped
  x = (x << 1) - 1;
  int x1 = x ^ y;
  cout << x1 << endl; // 14->(01110)
}