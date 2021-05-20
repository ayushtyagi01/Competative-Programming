#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        vector<vector<int>> v(a+1,vector<int>(b+1,0));
        v[1][1]=1;
        for(int i=1;i<=a;i++){
           for(int j=1;j<=b;j++){
              v[i][j]+=v[i-1][j]+v[i][j-1];
            }
        }
        cout<<v[a][b]<<endl;
    }
    return 0;
}