#include <bits/stdc++.h>
using namespace std;
int main()
{ // TC->O(1)
  int n;
  cin >> n;
  if (n % 4 == 0)
    cout << n;
  else if (n % 4 == 1)
    cout << 1;
  else if (n % 4 == 2)
    cout << n + 1;
  else if (n % 4 == 3)
    cout << 0;
}