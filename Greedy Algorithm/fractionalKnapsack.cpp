// Problem Statement link: https://www.geeksforgeeks.org/fractional-knapsack-problem/
// TC -> O(nlogn)
// SC -> O(sorting algo)
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
  double r1 = (p1.first * 1.0) / (p1.second * 1.0);
  double r2 = (p2.first * 1.0) / (p2.second * 1.0);
  return r1 > r2;
}
int fractionalKnapsack(vector<int> &profit, vector<int> &weight, int n, int W)
{
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++)
  {
    v.push_back({profit[i], weight[i]});
  }
  sort(v.begin(), v.end(), cmp);
  double res = 0;
  for (int i = 0; i < n; i++)
  {
    if (v[i].second <= W)
    {
      res += v[i].first * v[i].second;
      W -= v[i].second;
    }
    else
    {
      res += ((v[i].first * 1.0) / (v[i].second * 1.0)) * W;
      W = 0;
      break;
    }
  }
  return res;
}
int main()
{
  vector<int> profit = {60, 100, 120};
  vector<int> weight = {10, 20, 30};
  int W = 50;
  int n = 3;
  cout << fractionalKnapsack(profit, weight, n, W);
}
