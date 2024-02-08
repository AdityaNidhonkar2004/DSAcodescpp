// In LC we are given vector we have to convert it into queue
#include <bits/stdc++.h>
using namespace std;
int main()
{
  queue<int> q;
  vector<int> s;
  q.push(1);
  q.push(1);
  q.push(0);
  q.push(0);
  for (int i = 0; i < q.size(); i++)
  {
    cout << q.front() << " ";
    int x = q.front();
    q.pop();
    q.push(x);
  }
  cout << endl;
  s.push_back(0);
  s.push_back(1);
  s.push_back(0);
  s.push_back(1);
  for (int i = 0; i < s.size(); i++)
  {
    cout << s[i] << " ";
  }
  cout << endl;

  int k = 0; // it is a counter which tells us that the students are repeating themseleves by joining the queue from the back so if k execeds the size of queue that means the students are again trying to get the sandwich and the sandwich on top is not of preference of any of them
  int i = 0;
  while (k < q.size())
  {
    // if the student takes sandwich then it leaves queue and we have new sandwitch on top of stack
    if (q.front() == s[i])
    {
      q.pop();
      i++;
      k = 0;
    }
    // now the student doesn t take sandwich it joins queue again from back
    else
    {
      int x = q.front();
      q.pop();
      q.push(x);
      k++;
    }
  }
  cout << k;
}