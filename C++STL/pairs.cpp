#include <bits/stdc++.h>
using namespace std;
int main()
{
  // Pair class:

  // Declaration:
  pair<int, int> pr = {1, 2};
  pair<pair<int, int>, int> pr1 = {{1, 2}, 3};
  pair<pair<int, int>, pair<int, int>> pr2 = {{1, 2}, {3, 4}};

  // Accessing the elements in pair
  cout << pr.first;         //-->1
  cout << pr.second;        //-->2
  cout << pr1.first.second; //-->2
}