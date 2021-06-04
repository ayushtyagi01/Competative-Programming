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
void solve(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll p1=max(a,b);
        ll p2=max(c,d);
        if((p1>=c||p1>=d)&&(p2>=a||p2>=b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}    
int main(){
    fastIO();
     solve();
    return 0;
}