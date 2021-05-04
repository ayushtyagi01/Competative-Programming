#include<bits/stdc++.h>
using namespace std;

// void fun(long long int x,long long int y,long long int n,long long int i){
//     if(i==n){
//         if(y>=0)
//         cout<<(y%1000000007)<<endl;
//         else{
//             cout<<abs(y+1000000007)<<endl;
//         }
//         return;
//     }
//     fun(y,y-x,n,i+1);
// }
int main(){
    long long int x,y;
    cin>>x>>y;
    long long int n;
    cin>>n;
    long long int a[6]={x,y,y-x,-x,-y,x-y};
    long long int ans=a[(n-1)%6];
    //cout<<ans<<endl;
    if(ans>=0)
        cout<<(ans%1000000007)<<endl;
    else
        cout<<abs((ans%1000000007)+1000000007)%1000000007<<endl;
    return 0;
}