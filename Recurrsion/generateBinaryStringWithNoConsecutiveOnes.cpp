#include <bits/stdc++.h>
using namespace std;
void binaryString(string s, int n)
{
  if (s.size() == n)
  {
    cout << s << endl;
    return;
  }
  binaryString(s + '0', n);
  if (s.size() == 0 || s[s.size() - 1] != '1')
  {
    binaryString(s + '1', n);
  }
}

int main()
{
  int n = 3;
  binaryString("", n);
}