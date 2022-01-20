#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1/?category[]=Graph&category[]=Graph&difficulty[]=-1&difficulty[]=0&page=1&query=category[]Graphdifficulty[]-1difficulty[]0page1category[]Graph

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    bool visited[V+1]={false};
    vector<int> res;
    queue<int> q;
    q.push(adj[0][1]);
    visited[adj[0][1]]=true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        res.push_back(u);
        for(int i:adj[u]){
            q.push(adj[u][i]);
        }
    }
    return res;

}
int main(){

    return 0;
}