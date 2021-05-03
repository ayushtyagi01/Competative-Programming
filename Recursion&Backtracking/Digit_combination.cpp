#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<char>> ans;
void combination(string s,int i,vector<char> v){
    if(i==s.size()){
        ans.push_back(v);
        return;
    }
    
    if(s[i]>=(char)48&&s[i]<=(char)57)
    {
        v.push_back('!');
        combination(s,i+1,v);
        v.pop_back();
        v.push_back('*');
        combination(s,i+1,v);
        v.pop_back();
        v.push_back('@');
        combination(s,i+1,v);
        v.pop_back();
    }
    else{
        v.push_back(s[i]);
        combination(s,i+1,v);
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    vector<char> v;
	    combination(s,0,v);
	    for(int i=0;i<ans.size();i++){
	        for(int j=0;j<ans[0].size();j++){
	            cout<<ans[i][j];
	        }
	        cout<<" ";
	    }
	    cout<<endl;
	    v.clear();
	    ans.clear();
	}
	return 0;
}