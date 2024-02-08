#include <bits/stdc++.h>
using namespace std;
int main()
{
  // PRIORITY QUEUE:In maximum priority queue we keep maximum element at the front
  priority_queue<int> pq;
  pq.push(1);
  pq.push(8);
  pq.push(2);
  pq.push(3);
  pq.push(6);

  cout << pq.top() << endl; // print->8

  // top
  // pop
  // size

  priority_queue<pair<int, int>> pq; // compares <int,int> first int and then second

  // priority queue in asending order or minimum priority queue using maximum priority queue

  priority_queue<int> pq;
  pq.push(-1);
  pq.push(-8);
  pq.push(-2);
  pq.push(-3);
  pq.push(-6);
  // pq-->{-1,-2,-3,-6,-8} maxi priority queue

  cout << -1 * pq.top() << endl; // prints 1

  // MINIMUM PRIORITY QUEUE:
  //  SYNTAX:
  // priority_queue<data_type,vector<int>,greater<data_type>> variable_name;
  priority_queue<int, vector<int>, greater<int>> pq;
}