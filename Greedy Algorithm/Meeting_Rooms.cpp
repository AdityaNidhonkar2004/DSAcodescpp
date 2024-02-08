// Q: Given an array of meeting time intervals where interval[i]=[start,end],return the minimum number of conference rooms required.
// EXAMPLE:
// INPUT:intervals=[[0,30],[5,10]]
// OUTPUT:2

#include <bits/stdc++.h>
using namespace std;

int maximumRoomsRequired(vector<vector<int>> &intervals)
{
  vector<int> start, ending;
  for (int i = 0; i < intervals.size(); i++)
  {
    start.push_back(intervals[i][0]);
    ending.push_back(intervals[i][1]);
  }
  sort(start.begin(), start.end());
  sort(ending.begin(), ending.end());
  int i = 0, j = 0, rooms = 0;
  int ans = 0;
  while (i < start.size() && j < ending.size())
  {
    if (start[i] < ending[j])
    {
      // meeting has started
      rooms++;
      ans = max(ans, rooms);
      i++;
    }
    else if (start[i] > ending[j])
    {
      // meeting has ended
      rooms--;
      j++;
    }
    else
    {
      i++;
      j++;
    }
  }
  return ans;
}
int main()
{

  vector<vector<int>> v = {{0, 30}, {5, 10}};
  cout << maximumRoomsRequired(v);
}