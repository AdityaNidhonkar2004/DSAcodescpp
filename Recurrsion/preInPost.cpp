#include <bits/stdc++.h>
using namespace std;
void pip(int n)
{
  if (n == 0)
    return;
  cout << "Pre" << n << endl;  // kaam
  pip(n - 1);                  // call
  cout << "In" << n << endl;   // kaam
  pip(n - 1);                  // call
  cout << "Post" << n << endl; // kaam
}

int main()
{
  int n;
  pip(3);
}