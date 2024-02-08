#include <bits/stdc++.h>
using namespace std;
int main()
{ // TC->O(1)
  int a = 6, b = 9;
  cout << a << " " << b;
  cout << endl;
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  cout << a << " " << b;
}