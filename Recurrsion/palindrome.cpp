#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int i, int j)
{
  if (i > j)
    return true;
  if (s[i] != s[j])
    return false;
  return isPalindrome(s, i + 1, j - 1);
}
int main()
{
  string s = "racecar";
  cout << isPalindrome(s, 0, s.size() - 1);
}