#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,i=1,ans=1;
        cin>>n;
        if(n==1||n==0){
        cout<<"0"<<endl;
        }
        else{
        while(ans<=n){
            ans=pow(2,i);
            i++;
        }
        ans=pow(2,i-2)-1;
    cout<<ans<<endl;
    }
    }
    return 0;
}