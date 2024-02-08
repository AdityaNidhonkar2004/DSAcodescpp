#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {2, 2, 2, 3};
  int ans = 0, cnt;
  while (1)
  {
    for (int i = 0; i < 3; i++)
    {
      if (arr[i] != 0)
      {
        ans++;
        arr[i] -= 1;
      }
    }
    cnt = 0;
    for (int i = 0; i < 3; i++)
    {
      if (arr[i] != 0)
      {
        cnt++;
      }
    }
    if (cnt == 0 || cnt == 1)
    {
      break;
    }
  }
  cout << ans;
}
// Note that the xor of subsets of all the subset is zero
