#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/topological-sort/1

vector<int> topoSort(int V, vector<int> adj[]) 
{
    vector<int> indeg(V,0);
    vector<int> res;
    for(int i=0;i<V;i++){
        for(auto it:adj[i]){
            indeg[it]++;
        }
    }
    queue<int> q;
    for(int i=0;i<V;i++){
        if(indeg[i]==0)q.push(i);
    }
    while (!q.empty())
    {
        int  top = q.front();
        q.pop();
        res.push_back(top);
        for(int it:adj[top]){
            indeg[it]--;
            if(indeg[it]==0)q.push(it);
        }
    }
    return res;
}
int main(){

    return 0;
}