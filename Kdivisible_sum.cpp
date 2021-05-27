#include<bits/stdc++.h>
#define ll  long long int
#define vector  vector<long long int>
#define Vector  vector<vector<long long int>>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fastIO();
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll ans=0,k1=k;
       if(k<n){
           k1=n/k;
           if(n%k!=0)
             k1++;
           k=k*k1;
       }
       if(k%n==0){
           ans=k/n;
       }
       else{
           ans=k/n+1;
       }
        cout<<ans<<endl;
    }
    return 0;
}