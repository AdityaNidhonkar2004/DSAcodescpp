#include <bits/stdc++.h>
using namespace std;
int main()
{
  // This returns true if the previous premutation exists else false if not TC->O(N)
  // SYNTAX: prev_permutation(starting_iterator,ending_iterator);

  string s = "abc";
  bool r = prev_permutation(s.begin(), s.end());
  cout << r;
}