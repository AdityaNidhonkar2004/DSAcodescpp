#include <bits/stdc++.h>
using namespace std;
void pip(int n)
{
  if (n == 0)
    return;
  cout << n;  // kaam
  pip(n - 1); // call
  cout << n;  // kaam
  pip(n - 1); // call
  cout << n;  // kaam
}

int main()
{
  int n;
  pip(3);
}