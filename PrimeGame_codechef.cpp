#include<bits/stdc++.h>
#include<iostream>
using namespace std;

    const int n=1e6;
    int a[n+1];
    vector<long long >isprime(n , true); 
    vector<long long >prime; 
    vector<long long >SPF(n);
    

    void print(int ans){
        if(ans==1){
            cout<<"Chef"<<"\n";
        }else{
            cout<<"Divyam"<<"\n";
        }
    }
int main(){
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      
     isprime[0] = isprime[1] = false ; 
     int c=0;
    for (long long int i=2; i<=n ; i++) 
    { 
        if (isprime[i]) 
        { 
            c+=1;
            prime.push_back(i); 
            SPF[i] = i; 
        } 
            a[i]=c;
        for (long long int j=0; j < (int)prime.size() &&  i*prime[j] < n && prime[j] <= SPF[i]; j++) 
        { 
            isprime[i*prime[j]]=false; 
  
        
            SPF[i*prime[j]] = prime[j] ; 
        } 
    } 
 
	long long int t,x;
	cin>>t;
	while(t--){
	  int x,k,ans=0;
	  cin>>x>>k;
	   if(a[x]<=k){
	      ans=1;
	  }
	  else{
	      ans=0;;
	  }
	  print(ans);
	}
	return 0;
}