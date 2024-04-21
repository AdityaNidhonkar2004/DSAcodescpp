class Solution
{
public:
  // Function to return Breadth First Traversal of given graph.
  vector<int> bfsOfGraph(int V, vector<int> adj[])
  {
    queue<int> q;
    int vis[V] = {0};
    q.push(0);
    vector<int> bfs;
    vis[0] = 1;
    while (q.size() > 0)
    {
      int node = q.front();
      q.pop();
      bfs.push_back(node);
      vis[node] = 1;
      for (auto it : adj[node])
      {
        if (vis[it] != 1)
        {
          q.push(it);
          vis[it] = 1;
        }
      }
    }
    return bfs;
  }
};