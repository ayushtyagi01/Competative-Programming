#include<bits/stdc++.h>
#include<vector>
using namespace std;

int c=0;
bool isSafe(vector<vector<bool>> &grid,int row,int col,int n){
    for(int i=0;i<n;i++){
        if(grid[i][col]) return false;
    }
    for(int i=row,j=col;i>=0&&j>=0;i--,j--){
        if(grid[i][j]) return false;
    }
    for(int i=row,j=col;i>=0&&j<n;i--,j++){
        if(grid[i][j]) return false;
    }
    
    return true;

}
void display(vector<vector<bool>> &grid,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]) cout<<"Q";
            else cout<<".";
        }
        cout<<endl;
    }
}
void nQueen(vector<vector<bool>> &grid,int curr,int n){
    if(curr==n){
        c++;
        display(grid,n);
        cout<<endl;
        return ;
    }
    for(int i=0;i<n;i++){
       if(isSafe(grid,curr,i,n)){
           grid[curr][i]=true;;
           nQueen(grid,curr+1,n);
           grid[curr][i]=false;
       }
}
return;
}
int main(){
    int n;
    cin>>n;
    vector<vector<bool>> grid(n,vector<bool>(n,false));
    nQueen(grid,0,n);
    cout<<c<<endl;
    return 0;
}