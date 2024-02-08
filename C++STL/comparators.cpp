#include <bits/stdc++.h>
using namespace std;
bool comp(int ele1, int ele2)
{
  // NOT WORKING
  if (ele1 <= ele2)
    return true;
  return false;
}
int main()
{
  // sort in decending order
  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  sort(arr, arr + n, comp);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}