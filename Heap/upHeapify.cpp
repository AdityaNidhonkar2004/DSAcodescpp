#include <bits/stdc++.h>
using namespace std;
class Heap
{
  vector<int> hp;

public:
  // Upheapify or PercolateUp Function
  void upHeapify(int ci)
  {
    while (ci)
    {
      int pi = (ci - 1) / 2;
      if (hp[pi] < hp[ci])
      {
        swap(hp[pi], hp[ci]);
        ci = pi;
      }
      else
      {
        break;
      }
    }
  }
  bool empty()
  {
    return hp.size() == 0;
  }
  // Inserting a value in the heap
  void push(int val)
  {
    hp.push_back(val);
    upHeapify(hp.size() - 1);
  }
  void display()
  {
    cout << "Max Heap => ";
    for (int i = 0; i < hp.size(); i++)
    {
      cout << hp[i] << " ";
    }
    cout << endl;
  }
  int peek()
  {
    return hp[0];
  }
};

int main()
{
  Heap h;
  h.push(1);
  h.push(3);
  h.push(5);
  h.push(11);
  h.push(100);
  h.push(119);
  cout << "Root of Max Heap " << h.peek();
  cout << endl;
  h.display();
}