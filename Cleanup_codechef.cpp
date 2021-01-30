#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,x;
	    cin>>n>>m;
	     unordered_set<int> set ;
	     for(int i=0;i<m;i++){
	         cin>>x;
	         set.insert(x);
	     }
	     int a[n-m];
	     int k=0;
	     for(int i=1;i<=n;i++){
	         if(set.find(i) == set.end()){
	             a[k]=i;
	             k++;
	         }
	     }
	    for(int i=0;i<n-m;i+=2){
	        cout<<a[i]<<" ";
	    }
	    cout<<"\n";
	    for(int i=1;i<n-m;i+=2){
	        cout<<a[i]<<" ";
	    }
	   cout<<"\n";
	   set.clear();
	}
	return 0;
}
