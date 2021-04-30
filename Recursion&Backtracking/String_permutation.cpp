#include<bits/stdc++.h>
#include<vector>
using namespace std;

    //BRUTE-FORCE APPROACH
		//  void f(string s,string osf){
		//     if(s==""){
		//         cout<<osf<<endl;
		//         return;
		//     }
		//     char ch;
		//     for(int i=0;i<s.size();i++){
		//         ch=s[i];
		//         f(s.substr(0,i)+s.substr(i+1),osf+ch);
		//     }
		// }
        void f(string s,int j){
            if(s.size()-1==j){
                cout<<s<<endl;
                return;
            }
            for(int i=j;i<s.size();i++){
                swap(s[i],s[j]);
                f(s,j+1);
                swap(s[i],s[j]);

            }
        }
        void find_permutation(string S)
		{
		   // f(S,"");
           f(S,0);
		    return;
		}
int main(){
    string s; 
    cin>>s;
    find_permutation(s);
    return 0;
}
