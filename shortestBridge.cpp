#include<bits/stdc++.h>
using namespace std;
int maxs=INT_MAX;
void coloring(vector<vector<int>>& grid,vector<vector<bool>> &visited,int count,int i,int j,int m,int n){
    grid[i][j]=count;
    visited[i][j]=true;
    int dx[]={-1,1,0,0};
    int dy[]={0,0,-1,1};
    for(int k=0;k<4;k++){
        int xx = dx[k]+i;
        int yy = dy[k]+j;
        if(xx>=0 && xx<m && yy>=0 && yy<n && grid[xx][yy]==1 && visited[xx][yy]==false)
        coloring(grid,visited,count,xx,yy,m,n);
    }
}
void shortdist(vector<vector<int>> &grid,int sum,int i,int j,int m,int n){
    cout<<sum<<endl;
    if(grid[i][j]==2){
        maxs=min(maxs,sum);
        return;
    }
    int dx[]={-1,1,0,0};
    int dy[]={0,0,-1,1};
    for(int k=0;k<4;k++){
        int xx = dx[k]+i;
        int yy = dy[k]+j;
        if(xx>=0 && xx<m && yy>=0 && yy<n ){
            if( grid[xx][yy]!=grid[i][j])shortdist(grid,sum+1,xx,yy,m,n);
        }
  
    }      
}
int shortestBridge(vector<vector<int>>& grid) {
    int m=grid.size(),n=grid[0].size();
    vector<vector<bool>> visited(m,vector<bool>(n,false));
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1 && !visited[i][j]){
                count++;
                coloring(grid,visited,count,i,j,m,n);               
               }
            
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(grid[i][j]==1){
               cout<<i<<j<<endl;
               shortdist(grid,0,i,j,m,n);
           }
        }
      
    }
    cout<<maxs<<endl;
    return 0;
}
int main(){
    vector<vector<int>> grid = 
    {{1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1}};
    shortestBridge(grid);
    return 0;
}