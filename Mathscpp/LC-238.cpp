#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums;
  nums.push_back(-1);
  nums.push_back(1);
  nums.push_back(0); //-1,1,0,-3,3
  nums.push_back(-3);
  nums.push_back(3);
  int n = nums.size();
  vector<int> pp(n);
  vector<int> sp(n);
  vector<int> ans(n);
  int product = 1;
  // PREFIX PRODUCT
  pp[0] = product;
  for (int i = 0; i < n; i++)
  {
    pp[i] = product;
    product *= nums[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << pp[i] << " ";
  }
  cout << endl;
  // SUFFIX PRODUCT
  product = 1;
  sp[n - 1] = 1;
  for (int i = n - 1; i >= 0; i--)
  {
    sp[i] = product;
    product *= nums[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << sp[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < n; i++)
  {
    ans[i] = pp[i] * sp[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
}
