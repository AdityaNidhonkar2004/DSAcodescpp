#include <bits/stdc++.h>
using namespace std;

// TC->O(N) SC->(N*N)

// Undirected Graph :
int main()
{
  int n, m; // n -> No. of nodes & m -> No. of edges
  cin >> n >> m;
  int adj[n + 1][n + 1]; // Adjecency Matrix of size (n*n);
  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v; // Edge is between => Node(u) <---> Node(v)
    adj[u][v] = 1; // Edge is between Node(u) -> Node(v)
    adj[v][u] = 1; //  Edge is between Node(v) -> Node(u)
  }
  return 0;
}

// Directed Graph :

int n, m; // n -> No. of nodes & m -> No. of edges
cin >> n >> m;
int adj[n + 1][n + 1]; // Adjecency Matrix of size (n*n);
for (int i = 0; i < m; i++)
{
  int u, v;
  cin >> u >> v; // Edge is between => Node(u) ---> Node(v)
  adj[u][v] = 1; // Edge is between Node(u) -> Node(v)
}
return 0;