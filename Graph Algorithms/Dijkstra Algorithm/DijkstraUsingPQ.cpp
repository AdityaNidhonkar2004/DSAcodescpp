// Given a weighted, undirected and connected graph of V vertices and an adjacency list adj where adj[i] is a list of lists containing two integers where the first integer of each list j denotes there is edge between i and j , second integers corresponds to the weight of that  edge . You are given the source vertex S and You to Find the shortest distance of all the vertex's from the source vertex S. You have to return a list of integers denoting shortest distance between each node and Source vertex S.

vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; //{dist,node} or {dist,node} both can be used 
    pq.push({S, 0});
    vector<int> dist(V);
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[S] = 0;
    while (!pq.empty())
    {
        int node = pq.top().first;
        int dis = pq.top().second;
        pq.pop();
        for (auto it : adj[node])
        {
            int adjnode = it[0];
            int d = it[1];
            if (dist[adjnode] > d + dis)
            {
                dist[adjnode] = d + dis;
                pq.push({adjnode, dist[adjnode]});
            }
        }
    }
    return dist;
}