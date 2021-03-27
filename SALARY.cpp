#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int c=0;
	    for(int i=0;i<n;i++){
	       c=c+a[i]-a[0];
	        }
	    
	    cout<<c<<"\n";
	}
	return 0;
}
