#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        if(b==1){
            cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<a<<" "<<(a*b)<<" "<<(a*b)+a<<endl;
            }
    }
    return 0;
}