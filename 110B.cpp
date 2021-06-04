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
        ll n;
        cin>>n;
        ll a[n];
        vector v;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                v.push_back(a[i]);
            }
        }
        for(ll i=0;i<n;i++){
            if(a[i]%2!=0){
                v.push_back(a[i]);
            }
        }
        
            ll c=0;
        for(ll i=0;i<n-1;i++){
            for(ll j=i+1;j<n;j++){
                if(__gcd(v[i],2*v[j])>1){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}    
int main(){
    fastIO();
     solve();
    return 0;
}