#include <bits/stdc++.h>
using namespace std;
int main()
{
  // SORTING:
  // SYNTAX:sort(starting_iterator,ending_iterator)

  // IN ARRAYS:
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    sort(arr, arr + n); // sorts in asending order
  }

  // IN VECTORS:
  vector<int> v = {1, 6, 2, 7, 4};
  sort(v.begin(), v.end());
  // sort ony from idx 1 to 3
  sort(v.begin() + 1, v.begin() + 4);
}