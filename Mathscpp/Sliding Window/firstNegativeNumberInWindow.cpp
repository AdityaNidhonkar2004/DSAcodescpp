#include <bits/stdc++.h>
using namespace std;
int main()
{

  int arr[] = {2, -3, 4, 4, -7, -1, 4, -2, 6};
  int n = 9;
  int k = 3;
  int preneg;
  vector<int> ans;
  for (int i = 0; i < k; i++)
  {
    if (arr[i] < 0)
    {
      preneg = i;
      ans.push_back(arr[i]);
      break;
    }
  }
  int i = 1;
  int j = i + k - 1;
  while (j < n)
  {
    if (preneg >= i)
    {
      ans.push_back(arr[i]);
      i++;
      j++;
      break;
    }
  }
}