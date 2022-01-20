#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1/?category[]=Graph&category[]=Graph&problemStatus=unsolved&difficulty[]=-1&difficulty[]=0&page=1&query=category[]GraphproblemStatusunsolveddifficulty[]-1difficulty[]0page1category[]Graph

vector<int> res;
void DFS(vector<int> adj[],bool visited[],int s){

    visited[s]=true;
    res.push_back(s);
    for(int i=0;i<adj[s].size();i++){
            if(visited[adj[s][i]]==false)DFS(adj,visited,adj[s][i]);
    }

}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    bool visited[V+1]={false};
    DFS(adj,visited,0);
    return res;
}
int main(){

    return 0;
}