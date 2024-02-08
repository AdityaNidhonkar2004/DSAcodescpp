#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 10};

  vector<int> v = {3, 2, 1, 4, 5, 6, 21};

  // SYNTAX:
  //  For max element:max_element(firstIterator,lastIterator)
  // For min element :min_element(firstIterator,lastIterator)

  // IN ARRAY:
  int ele = *max_element(arr, arr + n);
  int ele1 = *min_element(arr, arr + n);

  // IN VECTOR:
  int ele2 = *max_element(v.begin(), v.end());
  int ele3 = *min_element(v.begin(), v.end());
}