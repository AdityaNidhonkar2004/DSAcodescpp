// Run it one online compiler
// TC-> O(n) using Downheapify
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

  // Upheapify or PercolateDown Function
  void downHeapify(int pi)
  {
    // Traverse through array till we go out of bound
    while (pi < hp.size())
    {
      int lc = 2 * pi + 1; // Left child indx
      int rc = 2 * pi + 2; // Right child indx
      // check whether lc exist in given array if not then break
      if (lc >= hp.size())
        break;
      // if it exist then find maximum numb from parent and left and right child
      int maxiele = pi;
      if (hp[lc] > hp[maxiele])
      {
        maxiele = lc;
      }
      if (rc < hp.size() && hp[rc] > hp[maxiele])
      {
        maxiele = rc;
      }
      // as maxiele!=pi that means root value is less than either right or left node
      if (maxiele != pi)
      {
        swap(hp[pi], hp[maxiele]);
        pi = maxiele;
      }
      // as maxele is our root tha means root is largest element among three
      else
      {
        break;
      }
    }
    return;
  }
  // Constructor:
  Heap(vector<int> v)
  {
    hp = v;
    int n = hp.size();
    // Only n/2 i.e half of elements required to be downheapfied as half of total nodes are leaf nodes remember to traverse in reverse order
    for (int i = n / 2; i >= 0; i--)
    {
      downHeapify(i);
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