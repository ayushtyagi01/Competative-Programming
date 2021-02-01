#include <iostream>
using namespace std;

int main() {
	    int a,b;
	    cin>>a>>b;
	    int d=abs(a-b);
	    int r=d%10;
	    if(r<9){
	        d=d+1;
	    }
	    else{
	        d=d-1;
	    }
	    cout<<d<<"\n";

	return 0;
}
