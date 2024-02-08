#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {6, 6, 3, 2, 3, 5};
  multiset<int> st;
  for (int i = 0; i < 6; i++)
  {
    st.insert(arr[i]);
  }
  for (auto it = st.begin(); it != st.end(); it++)
  {
    cout << *it << " ";
  }
}