#include<bits/stdc++.h>
#include<vector>
using namespace std;

    void f(string s,string osf,int n,int j){
        if(j==n){
			if(osf.size()>=n)
            cout<<osf<<endl;
            return;
        }
        
            f(s,osf+s[j],n,j+1);
			if(j>=1)
            f(s,osf+" "+s[j],n,j+1);
        
    }

	void permutation(string S){
        f(S,"",S.size(),0);
        return ;
    }
    int main(){
        string s; 
        cin>>s;
        permutation(s);
        return 0;
    }
