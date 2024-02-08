#include <bits/stdc++.h>
#define li long int
#define ll long long
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define srti(arr) sort(arr.begin(), arr.end())
#define srtd(arr) sort(arr.rbegin(), arr.rend())
#define fori(i, a, b) for (ll i = a; i < b; i++)
#define ford(i, a, b) for (ll i = a; i > b; i--)
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(NULL);
#define all(c) c.begin(), c.end()
#define sum(c) accumulate(all(c), 0LL)
#define vec vector<ll>
#define vvec vector<vector<ll>>
#define display(v)    \
  for (auto i : v)    \
  {                   \
    cout << i << " "; \
  }
using namespace std;

void solve()
{
}

int main()
{

  int t; // for test case
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> v;
    for (int i = 1; i <= n; i++)
    {
      v.pb(i);
    }
    ll presum = 0;
    for (ll i = 0; i < k; i++)
    {
      presum += v[i];
    }
    if (presum == x)
      cout << "YES" << endl;
    else
    {
      ll b = 1;
      ll j = k + 1;
      bool flag = false;
      while (j > n)
      {
        ll currsum = presum - v[b - 1] + v[j];
        if (currsum == x)
        {
          flag = true;
          break;
        }
        currsum = presum;
        j++;
        b++;
      }
      if (flag == true)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
  }
}
