#include <bits/stdc++.h>
using namespace std;
int main()
{
  // MAP: stores sorted and unique keys can have multiple values
  // TC->O(logN)
  // Declaration
  map<string, int> mpp; // map< key,value > variable_name
  mpp["adi"] = 1;       // key->value = adi->1
  mpp["atharva"] = 2;
  mpp["ram"] = 2;
  mpp["adi"] = 10; // overwrites previous value of key

  // Emplace:
  mpp.emplace("ram", 21);

  // Erase:
  mpp.erase("adi");                    // mpp.erase(key)
  mpp.erase(mpp.begin());              // mpp.erase(iterator)
  mpp.clear();                         // entire map is cleaned up
  mpp.erase(mpp.begin(), mpp.begin()); // cleans in given range

  // Print:
  //  it.first -> key
  //  it.second -> value
  for (auto it : mpp)
  {
    cout << it.first << " " << it.second;
  }
  for (auto it = mpp.begin(); it != mpp.end(); it++)
  {
    cout << it->first << " " << it->second;
  }

  // Empty:
  mpp.empty();

  // Count:
  mpp.count("adi"); // return 1 always

  // NOTE:
  map<int, int> mp;
  // mpp[key]++ incerments value
  mp[1]++; // ->(1,1)
  mp[2]++; //->(1,1),(2,1)
  mp[1]++; //(1,2),(2,1)

  // UNORDERED MAP: stored unsorted and unique keys
  // Faster than ordered map TC->O(1) and in worst case it is linear
  // Declaration
  unordered_map<int, int> umpp;
  // NOTE: unordered_map<pair<int,int>,int> umpp is INVALID unordered map cannot have pair as key

  // MULTIMAP:stores sorted and  more than one value for single key

  multimap<string, int> mmpp;
  mmpp.emplace("adi", 10);
  mmpp.emplace("adi", 20);
}