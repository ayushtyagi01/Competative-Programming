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
        ll s,x,n=0,z=0,p=0,ans=0,min=0,a=0,b=0;
        cin>>s;
        vector v;
        for(ll i=0;i<s;i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<s;i++){
            if(v[i]<0){
                n++;
            }
             if(v[i]==0){
                z++;
            }
             if(v[i]>0){
                p++;
            }
        }
        if(z==0&&p==0){
            ans=n;
        }
        else if(p==0){
            ans=n+z;
        }
        else if(n==0){
            if(z==0){
                ans=1;
            }
            else if(p==0){
                ans=z;
            }
            else{
                if(z>1){
                    ans=z;
                }
                else{
                    ans=2;
                }
            }
        }
        else if(n>1){
            if(abs(v[n-1]-v[n-2])>=v[n+z]){
                if(z>1){
                    ans=n+z;
                }
                else{
                    ans=n+z+1;
                }
            }
            else{
                ans=n+z;
            }
        }
        else if(n==1){
                if(z>1){
                ans=n+z;
                }
                else{
                    ans=n+z+1;
                }
        }
        cout<<ans<<endl;       
    }
    return 0;
}