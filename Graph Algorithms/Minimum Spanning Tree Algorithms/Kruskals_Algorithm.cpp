class DisjointSet{
    vector<int> rank,parent;
    
    public:
    DisjointSet(int n){
        rank.resize(n+1,0); // n+1 as we are considering the graph as 1 based indexing
        parent.resize(n+1,0);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    int findParent(int node){
        if(node == parent[node]) return node;
        
        //Path compression Technique: which reduces the complexity to search the ultimate parent of any node 
        return parent[node] = findParent(parent[node]); 
    }

    void UnionByRank(int u,int v){
        int ulp_u = findParent(u); // this function give the ultimate parent of node u and all the nodes present between u and ultimate node
        int ulp_v = findParent(v); // Similarly for v 
        if(ulp_u == ulp_v) return ;

        //The ultimate parent with less rank will get attach to other one and update its parent to the other ultimate parent.

        if(rank[u] > rank[v]){  
            parent[ulp_v] = ulp_u;
        }
        else if(rank[u] < rank[v]){
            parent[ulp_u] = ulp_v;
        }
        //Id both have same rank then any one can get attach to one another and rank of the node to whom we have attached will get incremented
        else{
            parent[ulp_u] = ulp_v;
            rank[ulp_v]++;
        }
    }
};

class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<pair<int,pair<int,int>>> edges;
        for(int i=0;i<V;i++){
            for(auto it : adj[i]){
                int u=it[0];
                int wt = it[1];
                edges.push_back({wt,{i,u}});
            }
        }
        sort(edges.begin(),edges.end());
        DisjointSet ds(V);
        int mstWt=0;
        for(auto it : edges){
            int u=it.second.first;
            int v=it.second.second;
            int wt=it.first;
            if(ds.findParent(u) != ds.findParent(v)){
                mstWt+=wt;
                ds.UnionByRank(u,v);
            }
        }
        return mstWt;
        
    }
};