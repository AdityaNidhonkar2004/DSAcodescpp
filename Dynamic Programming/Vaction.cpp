// Problem Statement
// Taro's summer vacation starts tomorrow, and he has decided to make plans for it now.

// The vacation consists of
// N days. For each
// i (
// 1≤i≤N), Taro will choose one of the following activities and do it on the
// i-th day:

// A: Swim in the sea. Gain
// a
// i
// ​
//   points of happiness.
// B: Catch bugs in the mountains. Gain
// b
// i
// ​
//   points of happiness.
// C: Do homework at home. Gain
// c
// i
// ​
//   points of happiness.
// As Taro gets bored easily, he cannot do the same activities for two or more consecutive days.

// Find the maximum possible total points of happiness that Taro gains.

// Constraints
// All values in input are integers.
// 1≤N≤10
// 5

// 1≤a
// i
// ​
//  ,b
// i
// ​
//  ,c
// i
// ​
//  ≤10
// 4

// Input
// Input is given from Standard Input in the following format:

// N
// a
// 1
// ​

// b
// 1
// ​

// c
// 1
// ​

// a
// 2
// ​

// b
// 2
// ​

// c
// 2
// ​

// :
// a
// N
// ​

// b
// N
// ​

// c
// N
// ​

// Output
// Print the maximum possible total points of happiness that Taro gains.

// Sample Input 1
// Copy
// 3
// 10 40 70
// 20 50 80
// 30 60 90
// Sample Output 1
// Copy
// 210
// If Taro does activities in the order C, B, C, he will gain
// 70+50+90=210 points of happiness.

// Sample Input 2
// Copy
// 1
// 100 10 1
// Sample Output 2
// Copy
// 100
// Sample Input 3
// Copy
// 7
// 6 7 8
// 8 8 3
// 2 5 2
// 7 8 6
// 4 6 8
// 2 3 4
// 7 5 1
// Sample Output 3
// Copy
// 46
// Taro should do activities in the order C, A, B, A, C, B, A.

// Solution:
// Bottom Up solution

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<vector<int>> dp(n, vector<int>(3, 0));

  int a, b, c;
  cin >> a >> b >> c;
  dp[0][0] = a;
  dp[0][1] = b;
  dp[0][2] = c;

  for (int i = 1; i < n; i++)
  {
    // input of happiness  for ith day
    cin >> a >> b >> c;
    // ith day ->a
    dp[i][0] = a + max(dp[i - 1][1], dp[i - 1][2]);
    // ith day ->b
    dp[i][1] = b + max(dp[i - 1][0], dp[i - 1][2]);
    // ith day ->c
    dp[i][2] = c + max(dp[i - 1][0], dp[i - 1][1]);
  }
  cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
}
