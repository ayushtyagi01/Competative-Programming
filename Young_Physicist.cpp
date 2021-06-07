#include<bits/stdc++.h>
#define ll  long long int
#define vec  vector<long long int>
#define Vec  vector<vector<long long int>>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve(){
    int n;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
           cin>>a[i][j]; 
        }
    }
    int sum=0,flag=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            sum+=a[j][i];
        }
        if(sum!=0){
            flag=1;
            break;
        }
        sum=0;
    }
    if(flag)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}    
int main(){
    fastIO();
     solve();
    return 0;
}