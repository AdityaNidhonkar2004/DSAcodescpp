#include <bits/stdc++.h>
using namespace std;
int main()
{
  // This returns true if the next premutation exists else false if not TC->O(N)
  // SYNTAX: next_permutation(starting_iterator,ending_iterator);

  string s = "abc";
  bool r = next_permutation(s.begin(), s.end());
  cout << r;

  // Print all permutations :
  string a = "bac";
  // S-1:Sort the string
  sort(a.begin(), a.end());
  // S-2:do while loop till the func does not give false
  do
  {
    cout << a << endl;
  } while (next_permutation(a.begin(), a.end()));
}