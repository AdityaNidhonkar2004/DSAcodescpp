#include <bits/stdc++.h>
using namespace std;
void toh(int n, char s, char h, char d,int &cnt)
{
  if (n == 0)
    return;
  cnt++;
  toh(n - 1, s, d, h,cnt);
  cout << s << "->" << d << endl;
  toh(n - 1, h, s, d,cnt);
}
int main()
{
  int n = 3;
  int cnt=0;
  toh(n, 'A', 'B', 'C',cnt); // (no. of plates,source,helper,destination)
  cout<<"No. of attempts : "<<cnt<<endl;
}