#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int i;
  cin >> i; // ith bit to check if its set or not
  if ((n & (1 << i)) == 1)
    cout << "Yes";
  else
  {
    cout << "No";
  }
}