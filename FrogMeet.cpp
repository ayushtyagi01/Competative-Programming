#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void print_ans(int c){
cout<<c<<"\n";
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int w[n];
	    int l[n];
	    int d[n];
	    int pos[n];
	    int po[n];
	    int x;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        w[i]=x;
	        d[i]=x;
	       
	    }
	    sort(d,d+n);
	     for(int i=0;i<n;i++){
	        cin>>l[i];
	    }
	    
	    int k=0,c=0;
	    for(int i=0;i<10;i++){
	        k++;
	    }
	     for(int i=0;i<10;i++){
	        k--;
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	        if(d[i]==w[j]){
	            pos[k]=j;
	            po[i]=l[j];
	            k++;
	            break;
	        }
	    }
	    }

	    k=1;
	    for(int i=1;i<n;i++){
	    while(pos[k]<=pos[k-1]){
	        pos[k]=pos[k]+po[k];
	        c++;
	    }
	    k++;
	}
	print_ans(c);
	
	    }
	return 0;
}
