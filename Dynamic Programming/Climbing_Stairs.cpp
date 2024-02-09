// Link:https://leetcode.com/problems/climbing-stairs/description/

// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// Example 1:

// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps
// Example 2:

// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step

// Constraints:

// 1 <= n <= 45

// Solution

vector<int> dp(1000000, -1);
class Solution
{
public:
  int f(int x)
  {
    if (x == 0)
      return 1;
    if (x == 1)
      return 1;
    if (dp[x] != -1)
      return dp[x];
    return dp[x] = f(x - 1) + f(x - 2);
  }
  int climbStairs(int n)
  {
    return f(n);
  }
};