#include<iostream>
using namespace std;

  int main()
  {
    long long int t;
    cin>>t;
    while(t--){
      long long int n,m,v;
      cin>>n>>m>>v;
      long long int i=v/n;
      long long int j=v%n;
      if(j!=0){
        i++;
      }
      else{
        j=n;
      }
     cout<<(long long int)m*(j-1)+i<<endl;

    }
  
  return 0;
  }