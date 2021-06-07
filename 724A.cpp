#include<bits/stdc++.h>
#define ll  long long int
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
        int n,x,flag=0;
        cin>>n;
        vector<ll> v;
        vector<ll> a;
        for(int i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
            if(x<0)
            flag=1;
        }
        if(flag){
            cout<<"No"<<endl;
        }
        else{
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size();j++){
                if(a.size()>300){
                    break;
                }
                if(find(a.begin(),a.end(),abs(a[i]-a[j]))==a.end()&&i!=j){
                    a.push_back(abs(a[i]-a[j]));
                    i=-1;
                    break;
                }
            }
        }
        if(a.size()<=300){
            cout<<"yes"<<endl;
            cout<<a.size()<<endl;
            for(int i=0;i<a.size();i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        }
    }
}    
int main(){
    fastIO();
     solve();
    return 0;
}