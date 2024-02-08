#include <bits/stdc++.h>
using namespace std;
// METHOD 1:
int maxvalue(int arr[], int n, int idx, int maxval)
{
  if (idx == n)
    return maxval;
  if (arr[idx] > maxval)
    maxval = arr[idx];
  maxvalue(arr, n, idx + 1, maxval);
}

// METHOD 2:
int maxInArr(int arr[], int n, int idx)
{
  if (idx == n)
    return INT_MIN;
  return max(arr[idx], maxInArr(arr, n, idx + 1));
}

int main()
{
  int arr[] = {1, 2, 3, 400, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << endl;
  cout << maxvalue(arr, n, 0, INT_MIN);
  cout << endl;
  cout << maxInArr(arr, n, 0);
}