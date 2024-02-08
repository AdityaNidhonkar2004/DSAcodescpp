// Run it one online compiler
// TC -> O(nlogn) using Upheapify
#include <bits/stdc++.h>
using namespace std;
class Heap
{
  vector<int> hp;

public:
  bool empty()
  {
    return hp.size() == 0;
  }

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
  // Constructor:
  Heap(vector<int> v)
  {
    hp = v;
    for (int i = 0; i < hp.size(); i++)
    {
      upHeapify(i);
    }
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
};

int main()
{
  vector<int> v = {2, 9, 8, 4, 55, 3, 643};
  Heap h(v);
  h.display();
}