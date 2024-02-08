#include <bits/stdc++.h>
using namespace std;
int main()
{
  // BITSET:store array of 0's and 1's and takes less space than int,char array as each element takes only one one bit
  // Declaration
  bitset<5> bt; // bitset<number_of_bits> variable_name;

  cin >> bt; // 10101

  // FUNCTIONS OF BITSET CONTAINER:

  // all():
  //  if all elements are 1 then return true else any one 0 return false
  cout << bt.all();

  // any():if any one bit is set then returns true else false
  bt.any(); //->1001=true ,0000=false

  // count():returns no. of set bits
  bt.count(); // 1001=2

  // flip():mkes the complement at given index;
  bt.flip();  // 0000
  bt.flip(2); // 10001 flips 2nd idx

  // none():if all bit are 0 then returns true else false
  bt.none(); // 0000->true
  bt.none(); // 1001->false

  // set():sets all bits to 1
  bt.set();     // 000->111;
  bt.set(3);    // 10001->10011 sets 3rd bit to 1
  bt.set(2, 0); // sets 2nd bit to 0

  // reset():sets all bits to 0
  bt.reset();  // 1011->0000
  bt.reset(2); // set 2nd bit to 0

  // size(): returns size
  bt.size();

  // test();chect the bit is set or not at given idx
  bt.test(3); // checks 3rd idx
}