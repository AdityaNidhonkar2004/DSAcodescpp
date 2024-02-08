#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};
  int n = sizeof(arr) / sizeof(arr[0]);
  // Q1]
  // Find last occurence of x in arr
  // Sol:
  //  STEP1]find upperbound of x adn get the index
  // STEP 2]minus 1 from the index
  // STEP 3]check whether the new idx is x or not also if the idx before subtracting was 0 then the last occurence does not exist;
  // CODE:
  int x;
  cin >> x;
  int idx = upper_bound(arr, arr + n, x) - arr - 1;
  if (idx >= 0 && arr[idx] == x)
    cout << idx << endl;
  else
    cout << "not found" << endl;

  // Q2
  // Find number of time the number x appears in an arr;
  // Sol:
  int cnt = count(arr, arr + n, x);
  cout << cnt << endl;
  // also upperbound - lowerbound

  // Q3
  // Find the first idx wher the x element lies in arr
  // sol;
  // Code:
  int idx1 = lower_bound(arr, arr + n, x) - arr;
  if (arr[idx1] == x && idx1 != n)
    cout << "FOUND" << endl;
  else
    cout << "NOT FOUND " << endl;
}