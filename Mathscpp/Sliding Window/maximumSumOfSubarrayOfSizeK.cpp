#include <bits/stdc++.h>
using namespace std;
int main()
{
  // BRUTE FORCE TC->O(n*k)
  int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
  int n = 9;
  int k = 3;
  int maxsum = INT_MIN;
  for (int i = 0; i <= n - k; i++)
  {
    int sum = 0;
    for (int j = i; j < i + k; j++)
    {
      sum += arr[j];
    }
    if (maxsum < sum)
      maxsum = sum;
  }
  cout << maxsum << endl;
  ;

  // SLIDING WINDOW
  int presum = 0;
  int idx;
  maxsum = INT_MIN;
  for (int i = 0; i < k; i++)
  {
    presum += arr[i];
  }
  int i = 1;
  int j = k;
  while (j < n)
  {
    int currsum = presum + arr[j] - arr[i - 1];
    if (maxsum < currsum)
    {
      maxsum = currsum;
      idx = i;
    }
    i++;
    j++;
    presum = currsum;
  }
  cout << maxsum << " " << idx;
}