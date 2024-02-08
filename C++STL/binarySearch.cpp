#include <bits/stdc++.h>
using namespace std;
int main()
{
  // SYNTAX:
  //  binary_search(startIterator,lastIterator,element);
  // returns true if found true else false

  int n;
  int arr[] = {1, 2, 3, 2, 5, 2, 10};

  vector<int> v = {3, 5, 1, 5, 5, 6, 21};

  bool bs = binary_search(arr, arr + n, 3);

  bool bs = binary_search(v.begin(), v.end(), 3);

  // LOWER BOUND:returns iterator of first element which is not  less than x

  // arr={1,5,7,8,9,10,11,11,12}
  // if x=10 it->10
  // if x=6 it->7
  // if x=13 it->end()

  // SYNTAX: lower_bond(startIterator,endIterator,elment)
  // IN ARRAY:
  auto it = lower_bound(arr, arr + n, 12);
  int idx = it - arr;

  // IN VECTOR:
  auto it = lower_bound(v.begin(), v.end(), 12);
  int idx = it - v.begin();

  // UPPER BOUND:return iterator to the element  which is just greater than given element

  // x=6 it->7
  // x=12 it->end()

  // SYNTAX:upper_bond(startIterator,endIterator,elment)

  // IN ARRAY:
  auto it = upper_bound(arr, arr + n, 12);
  int idx = it - arr;

  // IN VECTOR:
  auto it = upper_bound(v.begin(), v.end(), 12);
  int idx = it - v.begin();
}