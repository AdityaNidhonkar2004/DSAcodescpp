// Run on Online Complier
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Default pq in c++ is MaxHeap
  priority_queue<int> pqmax;
  pqmax.push(10);
  pqmax.push(20);
  pqmax.push(30);
  pqmax.push(40);
  pqmax.push(50);
  cout << "Priority Queue(MaxHeap) root value ->" << pqmax.top() << endl;

  // pq using MinHeap
  priority_queue<int, vector<int>, greater<int>> pqmin;
  pqmin.push(10);
  pqmin.push(20);
  pqmin.push(30);
  pqmin.push(40);
  pqmin.push(50);
  cout << "Priority Queue(MinHeap) root value ->" << pqmin.top() << endl;
}