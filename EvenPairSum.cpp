#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
	    long long int x,y;
	    cin>>x>>y;
	    
	    long long int a=(x/2)*(y/2);
	    long long int b=(x+1)/2*((y+1)/2);
	    cout<<a+b<<"\n";
	}
	return 0;
}
