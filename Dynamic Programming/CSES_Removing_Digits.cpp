// Time limit: 1.00 s
// Memory limit: 512 MB

// You are given an integer n. On each step, you may subtract one of the digits from the number.
// How many steps are required to make the number equal to 0?
// Input
// The only input line has an integer n.
// Output
// Print one integer: the minimum number of steps.
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// 27

// Output:
// 5

// Explanation: An optimal solution is 27 -> 20 ->18 -> 10 -> 9 -> 0.

// Non-Recurrsive Solution:

#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
  int temp = n;
  int res = 0;
  priority_queue<int> pq;
  while (temp > 0)
  {
    int ld = temp % 10;
    pq.push(ld);
    temp /= 10;
  }
  return pq.top();
}

int main()
{
  int n;
  cin >> n;
  int ans = 0;
  while (n != 0)
  {
    int x = f(n);
    n -= x;
    ans++;
  }
  cout << ans << endl;
}

// Recurrsive [Top-Down]:
// Approach:
// -Here at each instance we will subtract the n by each digit and form a tree like structure and count number of steps required and return minimum steps as answer
// -Recurrence Relation:

// f(n)---------min_of---> 1 + f(n-i) ,where i belongs to the digits present in n

#include <bits/stdc++.h>
using namespace std;
vector<int> dp;

vector<int> getDigits(int n)
{
  vector<int> res;
  while (n > 0)
  {
    if (n % 10 != 0)
      res.push_back(n % 10);
    n = n / 10;
  }
  return res;
}

int f(int n)
{
  if (n == 0)
    return 0;
  if (n <= 9)
    return 1;
  if (dp[n] != -1)
    return dp[n];
  int ans = INT_MAX;
  vector<int> dig = getDigits(n);
  for (int i = 0; i < dig.size(); i++)
  {
    ans = min(ans, f(n - dig[i]));
  }
  return dp[n] = ans + 1;
}
int main()
{

  int n;
  cin >> n;
  dp.resize(10000000, -1);
  cout << f(n) << endl;
}
