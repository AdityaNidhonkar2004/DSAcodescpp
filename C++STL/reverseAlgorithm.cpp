#include <bits/stdc++.h>
using namespace std;
int main()
{
  // REVERSE:

  // SYNTAX:
  // reverse(starting_iterator,ending_iterator)

  // IN ARRAY:

  int n;
  cin >> n;
  int arr[n];
  reverse(arr, arr + n);

  // IN VECTOR:
  vector<int> v;
  reverse(v.begin(), v.end());
  // Selective reversing
  reverse(v.begin() + 1, v.begin() + 3);
}