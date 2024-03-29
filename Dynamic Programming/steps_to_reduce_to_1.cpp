//  Question :
// Given "n" you can perform 3 operations
// 1]decrease it by 1,
// 2]divide it by 2 if divisible,
// 3]divide it by 3 if divisible.
// Return min number of these operations required to make n to 1

// Solution
// Approach :
// -It looks like Greedy but it won't work always.Ex n=8-> 8+1->9,9/3->3,3/3->1 we require 3 operations
// -So the correct approach is to at each instance we have to check all three operations and form a tree like structure and perform operation till we get 1 and count number of steps required and return minimum answer.
// -Recurrence Relation:

//                      |----->f(n-1)
// f(n)-------mini_of---|----->(n%2==0) f(n/2)
//                      |----->(n%3==0) f(n/3)

// -Base case n==1 return 0 and if (n==2 || n==3) return 1

// Code:
#include <bits/stdc++.h>
using namespace std;

vector<int> dp;
// Recurrsive
int f(int n)
{
  if (n == 1)
    return 0;
  if (n == 2 || n == 3)
    return 1;
  return 1 + min({f(n - 1), (n % 2 == 0) ? f(n / 2) : INT_MAX, (n % 3 == 0) ? f(n / 3) : INT_MAX});
}
// Top-Down -dp :-TC-O(N) SC-(N)
int ftd(int n)
{
  if (n == 1)
    return 0;
  if (n == 2 || n == 3)
    return 1;
  if (dp[n] != -1)
    return dp[n];
  return dp[n] = 1 + min({ftd(n - 1), (n % 2 == 0) ? ftd(n / 2) : INT_MAX, (n % 3 == 0) ? ftd(n / 3) : INT_MAX});
}

// Bottom-up -dp :-TC-O(N) ,SC-O(N)

int fbu(int n)
{
  dp.clear();
  dp.resize(n + 1);
  dp[1] = 0;
  dp[2] = dp[3] = 1;
  for (int i = 4; i <= n; i++)
  {
    dp[i] = 1 + min({dp[i - 1], (i % 2 == 0) ? dp[i / 2] : INT_MAX, (i % 3 == 0) ? dp[i / 3] : INT_MAX});
  }
  return dp[n];
}

int main()
{
  int n;
  cin >> n;
  dp.clear();
  dp.resize(n + 1, -1);

  cout << f(n);
}