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
/* Find a minimum number N with atleast 4 divisors and difference of any 2 divisor is d
Approach : Find a number with only 4 divisor whose divisors are 1 x y N 
x and y should be prime numbers with difference at least d */
bool prime(ll n){
    for(int i=2;i<n;i++){
        if(n%i==0){
           return false;
        }
    }
    return true;
}
void solve(){
    ll t;
    cin>>t;
    while(t--){
        ll d,c=0;
        cin>>d;
        ll ans=1;
        for(ll i=1+d;c<2;i++){
            if(prime(i)){
                ans*=i;
                i+=d;
                i--;
                c++;
                continue;
            }
        }
        cout<<ans<<endl;
    }
}
int main(){
    fastIO();
     solve();
    return 0;
}