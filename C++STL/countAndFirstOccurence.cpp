#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int arr[] = {1, 2, 3, 2, 5, 2, 10};

  vector<int> v = {3, 5, 1, 5, 5, 6, 21};

  // COUNT ELEMENT OCCURENCES:

  // SYNTAX:
  //  count(startIterator,lastIterator,element)

  // IN ARRAY:
  int cnt = count(arr, arr + n, 2);

  // IN VECTOR:
  int cnt = count(v.begin(), v.end(), 5);

  // FIND ELEMENTS FIRST OCCURENCE

  // SYNTAX:
  //  find(startIterator,lastIterator,element)-> this gives
  //  iterator pointing towards first instance of the max_element,if the element is not present then it points at last i.e end()

  // IN ARRAY
  auto it = find(arr, arr + n, 4);
  int idx = it - arr; // index of the first occurence

  // IN VECTOR:
  auto it = find(v.begin(), v.end(), 2);
  int idx = it - v.begin(); // index of the first occurence
}