#include <bits/stdc++.h>
using namespace std;
int main()
{
  // prefixsum
  int v[4] = {1, 2, 3, 4};
  vector<int> presum;

  for (int i = 0; i < 4; i++)
  {
    int sum = 0;
    for (int j = 0; j <= i; j++)
    {

      sum += v[j];
    }
    presum.push_back(sum);
  }
  for (int i = 0; i < 4; i++)
  {
    cout << presum[i] << " ";
  }
}
