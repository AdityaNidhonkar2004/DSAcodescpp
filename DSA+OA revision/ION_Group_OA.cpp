#include <bits/stdc++.h>
using namespace std;

int helper1(int src,int dest,vector<int> tt){
    int totalTime=0;
    while(src != dest){
        totalTime += tt[src-1];
        if(src == tt.size()) src=1;
        else src+=1;
    }
    return totalTime;
}
int helper2(int src,int dest,vector<int> tt){
    int totalTime=0;
    while(src != dest){
        totalTime += tt[src-1];
        if(src == 1){
          src=tt.size();
        }
        else src -= 1;
    }
    return totalTime;
}

int main() 
{
    vector<int> requestServer={1, 3, 3, 2};
    vector<int> transitionTime={3, 2, 1};
    int ans=0,src=1;
    for(int i=0;i<requestServer.size();i++){
      int dest=requestServer[i];
      if(src == dest) continue;
      int fdist=helper1(src,dest,transitionTime);
      int bdist=helper2(src,dest,transitionTime);
      ans+=min(fdist,bdist);
    src=dest;
    }
    cout<<ans;
}