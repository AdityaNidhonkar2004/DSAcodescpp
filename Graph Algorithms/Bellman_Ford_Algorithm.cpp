// Given a weighted and directed graph of V vertices and E edges, Find the shortest distance of all the vertex's from the source vertex S. If a vertices can't be reach from the S then mark the distance as 10^8. Note: If the Graph contains a negative cycle then return an array consisting of only -1.


class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        vector<int> dist(V,1e8);
        dist[S]=0;
        for(int i=0;i<V;i++){
            for(auto it : edges){
                int src=it[0];
                int dest=it[1];
                int wt=it[2];
                //Relaxation
                if( dist[src] != 1e8 && dist[src]+wt < dist[dest] ){
                    dist[dest] = dist[src]+wt;
                }
            }
        }
        for(auto it : edges){
                int src=it[0];
                int dest=it[1];
                int wt=it[2];
                //Relaxation
                if( dist[src] != 1e8 && dist[src]+wt < dist[dest] ){
                    return {-1};
            }
        }
        return dist;
        }
};