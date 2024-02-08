#include <bits/stdc++.h>
using namespace std;
void subarr(int arr[], int n, vector<int> v, int idx)
{
  if (idx == n)
  {

    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << " ";
    }
    cout << endl;
    return;
  }
  subarr(arr, n, v, idx + 1);
  // Condition to eliminate the non continuous chain of elements
  if (v.size() == 0 || arr[idx - 1] == v[v.size() - 1])
  {
    v.push_back(arr[idx]);
    subarr(arr, n, v, idx + 1);
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;
  vector<int> v;
  subarr(arr, n, v, 0);
}