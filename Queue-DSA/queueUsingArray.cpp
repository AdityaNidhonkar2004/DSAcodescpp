#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
  int f;
  int b;
  int s;
  vector<int> arr;
  Queue(int val)
  {
    f = b = s = 0;
    vector<int> v(val);
    arr = v;
  }
  void push_back(int value)
  {
    if (b == arr.size())
    {
      cout << " Queue is full";
      return;
    }
    arr[b] = value;
    b++;
    s++;
  }
  void pop()
  {
    if (s == 0)
    {
      cout << "Queue is empty";
    }
    f++;
    s--;
  }
  int front()
  {
    if (s == 0)
    {
      cout << "Queue is empty";
    }
    return arr[f];
  }
  int back()
  {
    if (s == 0)
    {
      cout << "Queue is empty";
    }
    return arr[b - 1];
  }
  void display()
  {
    for (int i = f; i < b; i++)
    {
      cout << arr[i] << " ";
    }
  }
};
int main()
{
  Queue q(4);
  q.push_back(10);
  q.push_back(20);
  q.push_back(30);
  q.push_back(40);
  q.display();
  cout << endl;
  q.pop();
  q.display();
  cout << endl;
  cout << q.front();
  cout << endl;
  cout << q.back();
}