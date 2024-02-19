// Given two strings text1 and text2, return the length of their longest common subsequence.If there is no common subsequence, return 0.

//     A subsequence of a string is a new string generated from the original string with some
//     characters(can be none) deleted without changing the relative order of the remaining characters.

//     For example,
//     "ace" is a subsequence of "abcde".A common subsequence of two strings is a subsequence that is common to both strings.

//     Example 1 :

//     Input : text1 = "abcde",
//             text2 = "ace" Output : 3 Explanation : The longest common subsequence is "ace" and its length is 3. Example 2 :

//     Input : text1 = "abc",
//             text2 = "abc" Output : 3 Explanation : The longest common subsequence is "abc" and its length is 3. Example 3 :

//     Input : text1 = "abc",
//             text2 = "def" Output : 0 Explanation : There is no such common subsequence, so the result is 0.

// Solution:
// Top-down Approach:
vector<vector<int>> dp;
class Solution
{
public:
  int f(string &s1, string &s2, int i, int j)
  {
    if (i >= s1.size() || j > s2.size())
      return 0;
    if (dp[i][j] != -1)
      return dp[i][j];
    if (s1[i] == s2[j])
    {
      return dp[i][j] = 1 + (f(s1, s2, i + 1, j + 1));
    }
    else
    {
      return dp[i][j] = max(f(s1, s2, i + 1, j), f(s1, s2, i, j + 1));
    }
  }
  int longestCommonSubsequence(string text1, string text2)
  {
    dp.clear();
    dp.resize(1005, vector<int>(1005, -1));
    return f(text1, text2, 0, 0);
  }
};