#include <bits/stdc++.h>
using namespace std;
int main()
{
  // Print the element which have hightest  occuerence
  int arr[] = {1, 2, 2, 4, 5};
  map<int, int> mp;
  int maxi = 0;
  for (int i = 1; i <= 5; i++)
  {
    mp[arr[i]]++;
    if (mp[arr[i]] > mp[maxi])
    {
      maxi = arr[i];
    }
  }
  cout << maxi;
}