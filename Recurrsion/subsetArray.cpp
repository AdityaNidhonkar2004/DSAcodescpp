#include <bits/stdc++.h>
using namespace std;
void printSs(int arr[], int n, int idx, vector<int> ans)
{
  if (idx == n)
  {
    if (ans.size() == 2)
    {
      for (int i = 0; i < ans.size(); i++)
      {
        cout << ans[i] << " ";
      }
      cout << endl;
      return;
    }
    else
      return;
  }

  printSs(arr, n, idx + 1, ans);
  ans.push_back(arr[idx]);
  printSs(arr, n, idx + 1, ans);
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = 9;
  vector<int> v;
  printSs(arr, n, 0, v);
}