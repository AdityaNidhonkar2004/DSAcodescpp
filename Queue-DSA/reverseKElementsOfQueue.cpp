#include <bits/stdc++.h>
using namespace std;
int main()
{
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  // print 10 20 30 40 50
  for (int i = 0; i < q.size(); i++)
  {
    cout << q.front() << " ";
    int x = q.front();
    q.pop();
    q.push(x);
  }
  cout << endl;
  int k = 2; // no of elements to be reversed in queue
  stack<int> s;
  // reverse 1st k elements
  for (int i = 1; i <= k; i++)
  {
    int x = q.front();
    q.pop();
    s.push(x);
  }
  for (int i = 0; i <= s.size(); i++)
  {
    int x = s.top();
    s.pop();
    q.push(x);
  }
  // Queue-> 30 40 50 20 10
  //  Now just push the remaining ele from front to back i.e push 30,40 and 50 to back and we get the ans
  for (int i = 1; i <= q.size() - k; i++)
  {
    int x = q.front();
    q.pop();
    q.push(x);
  }
  // print 20 10 30 40 50
  for (int i = 0; i < q.size(); i++)
  {
    cout << q.front() << " ";
    int x = q.front();
    q.pop();
    q.push(x);
  }
}