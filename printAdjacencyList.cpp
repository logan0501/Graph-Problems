#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1/?category[]=Graph&category[]=Graph&difficulty[]=-1&difficulty[]=0&page=1&query=category[]Graphdifficulty[]-1difficulty[]0page1category[]Graph

vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        vector<vector<int>> res(V);
       for(int i =0 ;i<V;i++){
            res[i].push_back(i);
           for(int j = 0;j<adj[i].size();j++){
               res[i].push_back(adj[i][j]);
           }
       }
       return res;
}

int main(){

    return 0;
}