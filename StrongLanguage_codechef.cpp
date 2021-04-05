#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0,flag=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                c+=1;
            }
            else{
                if(c>=k){
                    flag=1;
                    break;
                }
                else{
                    c=0;
                }
            }
             if(i==n-1){
                if(c>=k){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
