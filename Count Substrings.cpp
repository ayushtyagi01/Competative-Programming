#include <iostream>
using namespace std;

int main() {
	long long int t,n,i,c=0,k=1;
	string s;
	cin>>t;
	while(t--){
	    c=0,k=1;
	    cin>>n;
	    cin>>s;
	    for(i=0;i<n;i++){
	        if(s[i] == '1'){
	            c = c + k;
	            k++;
	        }
	    }
	    cout<<c<<"\n";
	}
	return 0;
}