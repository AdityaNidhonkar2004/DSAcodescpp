// Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to produce a sum of money x using the available coins in such a way that the number of coins is minimal.
// For example, if the coins are \{1,5,7\} and the desired sum is 11, an optimal solution is 5+5+1 which requires 3 coins.
// Input
// The first input line has two integers n and x: the number of coins and the desired sum of money.
// The second line has n distinct integers c_1,c_2,\dots,c_n: the value of each coin.
// Output
// Print one integer: the minimum number of coins. If it is not possible to produce the desired sum, print -1.
// Constraints

// 1 \le n \le 100
// 1 \le x \le 10^6
// 1 \le c_i \le 10^6

// Example
// Input:
// 3 11
// 1 5 7

// Output:
// 3

Solution :
#include <bits/stdc++.h>
    using namespace std;
vector<int> dp;
vector<int> v;
int f(int c)
{
  if (c == 0)
    return 0;
  if (dp[c] != -2)
    return dp[c];
  int ans = INT_MAX;

  for (int i = 0; i < v.size(); i++)
  {
    if (c - v[i] < 0)
      continue;
    ans = min(ans, f(c - v[i]));
  }
  if (ans == INT_MAX)
    return dp[c] = INT_MAX;
  return dp[c] = ans + 1;
}
int main()
{

  int n, x;
  cin >> n >> x;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    v.push_back(a);
  }
  dp.resize(1000006, -2);
  int result = f(x);
  if (result == INT_MAX)
    cout << "-1" << endl;
  else
    cout << result << endl;
}
