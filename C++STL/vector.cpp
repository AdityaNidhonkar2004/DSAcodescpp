#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  array<int, 5> arr;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  v.push_back(10);
  v.push_back(90);
  v.push_back(70);
  v.push_back(20);
  v.push_back(30);

  // v.push_back(50);
  sort(arr.begin(), arr.end());
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
}