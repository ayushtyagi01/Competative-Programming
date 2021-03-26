#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int convertToSet(vector<char> v) 
{ 
    set<char> s(v.begin(), v.end()); 
    return s.size(); 
} 

void print(int ans){
    cout<<ans<<"\n";
}
void solve(int n){
   long long int ans=0;
	      string finding[n],str1,str2,first[n],remain[n];
	      vector<vector<string>> v;
	      for(long long int i = 0;i<n;i++){
	            cin>>finding[i];
	            first[i]=finding[i][0];
	            remain[i]=finding[i].substr(1);
	      }
	      for(int i=0;i<n;i++){
	          vector<string> v1;
	          v1.push_back(remain[i]);
	          v.push_back(v1);
	      }
	      sort(v.begin(),v.end());
	      auto last=unique(v.begin(),v.end());
	      v.erase(last,v.end());
	      for(int i=0;i<n;i++){
	          for(int j=0;j<v.size();j++){
	              if(v[j][0]==remain[i]){
	                  v[j].push_back(first[i]);
	              }
	          }
	      }
	       
	      
	      int x=0,y=0,r=0;
	      unordered_set<string> s;
	      for(int i=0;i<v.size()-1;i++){
	          for(int j=i+1;j<v.size();j++){
	              x=v[i].size()-1;
	              y=v[j].size()-1;
	             for(int k=1;k<v[i].size();k++){
	                 s.insert(v[i][k]);
	             }
	             for(int k=1;k<v[j].size();k++){
	                 s.insert(v[j][k]);
	             }
	        
	             r=s.size();
	             ans=ans+(r-x)*(r-y)*2;
	             s.clear();
	          }
	  	} 
	  	print(ans);
}

int main() {
      
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      
      int t;
	  cin>>t;
	  while(t--){
	      int n;
	      cin>>n;
	      solve(n);
	}
	return 0;
}