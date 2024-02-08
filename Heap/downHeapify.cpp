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
  // Inserting a value in the heap
  void push(int val)
  {
    hp.push_back(val);
    upHeapify(hp.size() - 1);
  }

  // DownHeapify or Percolate Down function
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

  void pop()
  {

    swap(hp[0], hp[hp.size() - 1]);
    hp.pop_back();
    downHeapify(0);
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
  h.pop();
  h.display();
  h.pop();
  h.display();
}