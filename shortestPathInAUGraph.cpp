#include<bits/stdc++.h>
using namespace std;

// Link - https://www.geeksforgeeks.org/print-all-shortest-paths-between-given-source-and-destination-in-an-undirected-graph/

void shortDistance(vector<vector<int>> adj,int s,int v){
    int dist[]={INT_MIN};
    dist[s]=0;
    queue<int> q;
    int visited[v]={false};
    q.push(s);
    visited[s]=1;
    while (!q.empty())
    {
        int top = q.front();
        q.pop();
        for(auto i:adj[top]){
            if(visited[i]==false){
                dist[i]=dist[top]+1;
                visited[i]=true;
                q.push(i);
            }
        }
    }
    for(auto a:dist)cout<<a<<endl;
    
}

int main(){

    return 0;
}