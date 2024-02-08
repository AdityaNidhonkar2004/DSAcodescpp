#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int i;
  cin >> i; // ith bit to set it 1
  n = n | (1 << i);
  cout << n;
}