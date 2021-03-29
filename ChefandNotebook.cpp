#include <iostream>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
	    long long int x,y,k,n,flag=0;
	    cin>>x>>y>>k>>n;
	    x=x-y;
	    if(x<0){
	 flag=1;    
	}
	else{
	    long long int a,b;
	    for(long long int i=0;i<n;i++){
	        cin>>a>>b;
	        if(b>k){
	            continue;
	        }
	        else{
	            if(a>=x){
	                flag=1;
	                //break;
	            }
	        }
	    }
	}
	if(flag==1)
	cout<<"LuckyChef\n";
	else
	cout<<"UnluckyChef"<<"\n";
	}
	return 0;
}
