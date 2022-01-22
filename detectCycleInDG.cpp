#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1/

bool DFSREC(vector<int> adj[],int s,bool visited[],bool rectstack[]){
    visited[s]=true;
    rectstack[s]=true;
    for(auto v:adj[s]){
        if(visited[v]==false && DFSREC(adj,v,visited,rectstack))return true;
        else if(rectstack[v]==true)return true;
    }   
    rectstack[s]=false;
    return false;
}
bool isCyclic(int V, vector<int> adj[]) {
    bool visited[V]={false};
    bool recst[V]={false};
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            if(DFSREC(adj,i,visited,recst)==true)return true;
        }
    }
    return false;
}
int main(){

    return 0;
}