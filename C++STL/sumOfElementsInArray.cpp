#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  int arr[] = {1, 2, 3, 4, 5, 6, 10};

  vector<int> v = {3, 2, 1, 4, 5, 6, 21};

  // SYNTAX:
  //  accumulate(startIterator,lastIterator);

  // IN ARRAY:
  int sum = accumulate(arr, arr + n);

  // IN VECTOR:
  int sum = accumulate(v.begin(), v.end());
}