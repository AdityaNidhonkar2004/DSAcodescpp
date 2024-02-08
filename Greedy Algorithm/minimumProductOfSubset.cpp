#include <bits/stdc++.h>
using namespace std;

int miniProductOfSubset(vector<int> &v)
{
  int cn = 0, cz = 0, cp = 0;
  int pro_pos = 1;
  int pro_neg = 1;
  int largest_neg = INT_MAX;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] > 0)
    {
      cp++;
      pro_pos *= v[i];
    }
    else if (v[i] < 0)
    {
      cn++;
      pro_neg *= v[i];
      largest_neg = max(largest_neg, v[i]);
    }
    else
    {
      cz++;
    }
  }
  if (cn == 0)
  {
    if (cz > 0)
      return 0;
    else
    {
      auto it = min_element(v.begin(), v.end());
      return *it;
    }
  }
  else
  {
    if (cn % 2 != 0)
    {
      return pro_neg * pro_pos;
    }
    else
    {
      int newpro_neg = pro_neg / largest_neg;
      return newpro_neg * pro_pos;
    }
  }
}
int main()
{
  vector<int> v = {-1, -2, -4};
  cout << miniProductOfSubset(v);
}