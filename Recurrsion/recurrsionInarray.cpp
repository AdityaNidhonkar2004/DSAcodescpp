#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int s, int idx)
{
  if (idx == s)
    return;

  cout << arr[idx] << " ";
  printarray(arr, s, idx + 1);
}
void printvec(vector<int> &v, int idx)
{
  if (idx == v.size())
    return;
  cout << v[idx] << " ";
  printvec(v, idx + 1);
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  printarray(arr, n, 0);
  cout << endl;

  vector<int> v;
  v.push_back(1);
  v.push_back(4);
  v.push_back(2);
  v.push_back(6);
  v.push_back(5);
  printvec(v, 0);
}