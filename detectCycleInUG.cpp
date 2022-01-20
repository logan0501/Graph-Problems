#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

bool DFSRec(vector<int> adj[],int s,int parent,bool visited[]){
    visited[s]=true;
    for(auto v:adj[s]){
        if(visited[v]==false){
            if(DFSRec(adj,v,s,visited)==true)return true;
        }else if(v!=parent)return true;
    }
    return false;
}
bool isCycle(int V, vector<int> adj[]) {
    bool visited[V]={false};
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            if(DFSRec(adj,i,-1,visited)==true)return true;
        }
    }
}
int main(){

    return 0;
}