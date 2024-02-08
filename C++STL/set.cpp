#include <bits/stdc++.h>
using namespace std;
int main()
{
  // Data structure which stores unique elements

  // ORDERED SET:sorted and unique elements

  // Declaration
  set<int> st; // set <data_type> variable_name;
  set<int> st = {2, 3, 4, 5, 6};
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.insert(x); // TC->O(logN)
  }
  // In  ORDERED SET the element are arranged in asending order
  // Cannot access the element by [] operator we have to use iterators like  st.begin()

  // Print set:
  // 1]
  for (auto it = st.begin(); it != st.end(); it++)
  {
    cout << *it << " ";
  }
  // 2]
  for (auto it : st)
  {
    cout << it << " ";
  }

  // Erase functionality:
  // TC->O(logN)
  st.erase(st.begin()); // SYNTAX-> st.(iterator)

  // erase more than one element
  st.erase(st.begin(), st.begin()); // st.erase(start_iterator,end_iterator) ,also ->st.erase(inclusive,exclusive)

  st.erase(5); // st.erase(key) delete the 5

  // Find :
  // TC->O(logN)
  auto it = st.find(5); // it will give an iterator to 5
  auto it = st.find(8); // as here 8 is not present it will give st.end()

  // Emplace/insert:
  // emplace is faster than insert
  st.emplace(7);

  // UNORDERED SET:unsorted and unique elements

  // Declaration:
  unordered_set<int> ust;
  ust.insert(2);
  ust.insert(1);

  // unordered set is faster than ordered set TC->O(1)
  // In worst case it can be linear [O(N)]
  // If tle comes use ordered set

  // MULTISET :non-unique and unsorted/sorted elements

  // Declaration
  multiset<int> ms;
  ms.emplace(1);
  ms.emplace(1);
  ms.emplace(2);
  ms.emplace(2); // ms={1,1,2,2}

  ms.erase(2);          // Erase 2
  ms.erase(ms.find(2)); // erase 2s
  auto it = ms.find(1); // Find

  // Print :
  for (auto it : ms)
  {
    cout << it << " ";
  }

  // Count:
  st.count(2); // return how many time 2 occurs
}