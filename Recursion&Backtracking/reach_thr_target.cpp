#include <iostream>
#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> ans;
    
	void paths(int a,int b,int c,int d,int j,vector<int> v){
	    if(j==d){
	        if(a==c)
	        ans.push_back(v);
	        
	        return;
	    }
	    v.push_back(a+b);
	    paths(a+b,b,c,d,j+1,v);
	    v.pop_back();
	    v.push_back(a-b);
	    paths(a-b,b,c,d,j+1,v);
	    v.pop_back();
	}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    vector<int> v;
	    v.push_back(a);
	    paths(a,b,c,d,0,v);
	    sort(ans.begin(),ans.end());
	    for(int i=0;i<ans.size();i++){
	        for(int j=0;j<ans[0].size();j++){
	        cout<<ans[i][j]<<" ";
	    }
	    cout<<endl;
	    }
	    if(ans.size()==0){
	        cout<<"-1"<<endl;  
	    }
	    ans.clear();
	}
	return 0;
} 