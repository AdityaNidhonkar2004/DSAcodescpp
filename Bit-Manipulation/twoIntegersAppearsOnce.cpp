#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[10] = {1, 1, 2, 5, 6, 7, 2, 7, 8, 8};
  // S-1: Xor of all the numbers in array
  int XOR = 0;
  for (int i = 0; i < 10; i++)
  {
    XOR = XOR ^ arr[i];
  }
  // S-2:the xor we get is the xor of two numbers which occured once so check the first set bit from right in the obtained xor number
  int cnt = 0;
  while (XOR)
  {
    if (XOR & 1 == 1)
    {
      break;
    }
    cnt++;
    XOR = XOR >> 1;
  }
  // S-3:now make two groups one with first set bit of xor number is set and other with that bit is clear and xor the groups with similar set bit at that bit
  int XOR1 = 0, XOR2 = 0;
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] & (1 << cnt))
    {
      XOR1 = XOR1 ^ arr[i];
    }
    else
    {
      XOR2 = XOR2 ^ arr[i];
    }
  }
  cout << XOR1 << " " << XOR2;
}
