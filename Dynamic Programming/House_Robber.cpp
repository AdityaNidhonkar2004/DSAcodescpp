// https://leetcode.com/problems/house-robber/description/
// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

// Example 1:

// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.
// Example 2:

// Input: nums = [2,7,9,3,1]
// Output: 12
// Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
// Total amount you can rob = 2 + 9 + 1 = 12.

// Input: nums = [2,1,1,9]
// Output: 11
// Explanation: Rob house 1 (money = 2), rob house 4 (money = 9) .
// Total amount you can rob = 2 + 9 = 11.

// Solution:
// Approach:
- Here we we apply recurrsion and whe n we are at ith house we will either rob it and jump to(i + 2)th house OR we won't rob the ith house and jump to (i+1)th house  - Recurrance relation:
    i->index to iterate, arr->array

                             | -- --->arr[i] + f(arr, i + 2); // rob and jump by 2
f(arr, i)-- -- |
    | -- --->0 + f(arr, i); // don't rob and jump by 1
so ans is maximum of above both conditions - Base case will be if i exceeds the size of arr then return 0;

    // Code
    class Solution{
      public:
vector<int> dp;
// Recurrsive
int fr(vector<int> v, int i)
{
  if (i == v.size() - 1)
    return v[i];
  if (i == v.size() - 2)
    return max(v[i], v[i + 1]);

  return max(v[i] + fr(v, i + 2), 0 + fr(v, i + 1));
}

// top down- dp
int ftd(vector<int> v, int i)
{
  if (i == v.size() - 1)
    return v[i];
  if (i == v.size() - 2)
    return max(v[i], v[i + 1]);
  if (dp[i] != -1)
    return dp[i];
  return dp[i] = max(v[i] + ftd(v, i + 2), ftd(v, i + 1));
}
int fbu(vector<int> v)
{
  int n = v.size();
  if (n == 1)
    return v[0];
  vector<int> dp;
  dp.clear();
  dp.resize(n, 0);
  dp[n - 1] = v[n - 1];
  dp[n - 2] = max(v[n - 1], v[n - 2]);
  for (int i = n - 3; i >= 0; i--)
  {
    dp[i] = max(v[i] + dp[i + 2], 0 + dp[i + 1]);
  }
  return dp[0];
}

int rob(vector<int> &nums)
{
  dp.clear();
  dp.resize(105, -1); // resize it to slightly more than the given range for safety
  int i = 0;
  // return fr(nums,i);
  // return fdp(nums,i);
  return fbu(nums);
}
}
;
