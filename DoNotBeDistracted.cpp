#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        string st;
        cin>>st;
        set<int> s; 
        for(int i=0;i<n;i++){
            if(s.count(st[i])!=0){
              s.insert(st[i]);  
            }
            else if(st[i-1]!=st[i]){
                flag=1;
                break;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}