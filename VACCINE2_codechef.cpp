#include <iostream>
#include <cmath> 
using namespace std;

int main() {
	long long int n,s,d,a;
	cin>>n;
	for(long long int i=0;i<n;i++){
	      cin>>s>>d;
	      int a,r=0;
	      for(int i=0;i<s;i++){
	            cin>>a;
	            if(a>=80 || a<=9){
	                  r++;
	            }
	      }
	      cout<<ceil((float)r/d)+ceil((float)(s-r)/d)<<"\n";
	      r=0;
	}
	return 0;
}