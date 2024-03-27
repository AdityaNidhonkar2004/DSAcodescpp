#include <bits/stdc++.h>
using namespace std;

// TC->O(N) SC->(2E)
// E-> No. of edges

// Undirected Graph :
int main()
{
  int n, m; // n -> No. of nodes & m -> No. of edges
  cin >> n >> m;
  vector<int> adj[n + 1]; // Adjecency List of size (n);
  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;       // Edge is between => Node(u) <---> Node(v)
    adj[u].push_back(v); // Edge is between Node(u) -> Node(v)
    adj[v].push_back(u); //  Edge is between Node(v) -> Node(u)
  }
  return 0;
}

// Directed Graph :

//   int n, m; // n -> No. of nodes & m -> No. of edges
//   cin >> n >> m;
//   vector<int> adj[n + 1]; // Adjecency List of size (n);
//   for (int i = 0; i < m; i++)
//   {
//     int u, v;
//     cin >> u >> v;       // Edge is between => Node(u) ---> Node(v)
//     adj[u].push_back(v); // Edge is between Node(u) -> Node(v)
//   }
//   return 0;