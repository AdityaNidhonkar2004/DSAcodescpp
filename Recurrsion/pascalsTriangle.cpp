#include <bits/stdc++.h>
using namespace std;
// When Row no and Column number is given and we have to return the number at that position
int NCR(int r, int c)
{
  int res = 1;
  for (int i = 0; i < c; i++)
  {
    res *= (r - i);
    res /= (i + 1);
  }
  return res;
}

// When a row number is given and we have to print that particular row of pascals triangle
void printTriangle(int r, vector<int> &ans)
{
  ans.push_back(1);
  int sum = 1;
  for (int i = 1; i < r; i++)
  {
    sum *= (r - i);
    sum = sum / i;
    ans.push_back(sum);
  }

  return;
}

int main()
{
  int r, c;
  cin >> r >> c;
  cout << NCR(r, c);
  cout << endl;
  vector<int> ans;
  printTriangle(4, ans);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}