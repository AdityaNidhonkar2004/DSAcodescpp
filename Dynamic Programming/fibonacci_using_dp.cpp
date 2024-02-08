#include <bits/stdc++.h>
using namespace std;

// Memoization -> Top-Down Approach
int fibo(int n, vector<int> &dp)
{
  if (n == 0 or n == 1)
    return n;
  if (dp[n] != -1)
    return dp[n];
  return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}

// Tabulation ->Bottom-up Approach
int fibo2(int n, vector<int> &dp2)
{
  dp2[0] = 0;
  dp2[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    dp2[i] = dp2[i - 1] + dp2[i - 2];
  }
  return dp2[n];
}
// Most optimised so for Fibonacci using variables and bottom uo approach
int fibo3(int n)
{
  int a = 0;
  int b = 1;
  int c = a + b;
  for (int i = 2; i < n; i++)
  {
    a = b;
    b = c;
    c = a + b;
  }
  return c;
}
int main()
{
  int n = 8;
  vector<int> v(n + 1, -1);
  cout << fibo(n, v);
  cout << endl;
  int n2 = 8;
  vector<int> v2(n2 + 1);
  cout << fibo2(n2, v2);
  cout << endl;
  cout << fibo3(8);
}