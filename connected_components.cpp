#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> graph,int src,vector<int> &visited){
    visited[src]=true;
    for(int nbr:graph[src]){
        if(!visited[nbr])dfs(graph,nbr,visited);
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<int>> graph(n+1);
    vector<int> visited(n+1,0);
    while(e--){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(graph,i,visited);
            count++;
        }
    }
    cout<<count<<endl;
    return 0;   
}