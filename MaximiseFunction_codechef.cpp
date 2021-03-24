#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(long long int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    long long int ans=2*(a[n-1]-a[0]);
	    cout<<ans<<"\n";
	}
	return 0;
}
