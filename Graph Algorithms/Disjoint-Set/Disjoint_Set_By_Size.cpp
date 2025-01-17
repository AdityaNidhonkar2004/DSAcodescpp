#include<bits/stdc++.h>
using namespace std;
// TC -> O(4alph) ~ O(constant)
class DisjointSet{

    vector<int> size,parent;
    
    public:

    DisjointSet(int n){
        size.resize(n+1,0); // n+1 as we are considering the graph as 1 based indexing
        parent.resize(n+1,0);
        for(int i=0;i<=n;i++){
            parent[i]=i;
            size[i]=1;
        }
    }

    int findParent(int node){
        if(node == parent[node]) return node;
        
        //Path compression Technique: which reduces the complexity to search the ultimate parent of any node 
        return parent[node] = findParent(parent[node]); 
    }

    void UnionBySize(int u,int v){
        int ulp_u = findParent(u); // this function give the ultimate parent of node u and all the nodes present between u and ultimate node
        int ulp_v = findParent(v); // Similarly for v 
        if(ulp_u == ulp_v) return ;

        //The ultimate parent with less size will get attach to other one and update its parent to the other ultimate parent and the size of this ultimate parent will increase.

        if(size[u] > size[v]){  
            parent[ulp_v] = ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
        else if(size[u] < size[v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v]+=size[ulp_u];
        }
        //Id both have same rank then any one can get attach to one another and rank of the node to whom we have attached will get incremented
        else{
            parent[ulp_u] = ulp_v;
           size[ulp_v]+=size[ulp_u];
        }
    }
};


int main(){
    int n;
    cout<<"Enter number of nodes : ";cin>>n;
    DisjointSet ds(n);

    while(1){
        char c;
        cout<<"Want to update graph ?(Y/N)";cin>>c;
        if(c='Y'){
             int u,v;
             cout<<"Enter source node : ";cin>>u;
             cout<<"Enter destination node : ";cin>>v;
             ds.UnionBySize(u,v);
        }
        char o; 
        cout<<"Want to check if any node if any two nodes belong to sname component or not?(Y/N)"; cin>>o;
        if(o =='Y'){
            int n1,n2;
            cout<<"Enter any node present in graph :";cin>>n1;
            cout<<"Enter another node present in graph ";cin>>n2;
            if(ds.findParent(n1) == ds.findParent(n2)){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        char o2;
        cout<<"Want to Continue ? (Y/N)";cin>>o2;
        if(o2 == 'N') break;        
    }
    cout<<"Program Ended :-)";


}
