#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--){
	    int a,o,c,flag=0;
	    cin>>a>>o>>c;
	    for(int i=1;i<=c;i++){
	        if(a==o){
	            break;
	        }
	        else if(a>o){
	            o++;
	        }
	        else if(o>a){
	            a++;
	        }
	    }
	    cout<<abs(a-o)<<"\n";
	}
	return 0;
}
