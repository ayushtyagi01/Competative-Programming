#include<iostream>
using namespace std;

  int main()
  {
   int n;
   cin>>n;
  int p=n*n;
   int a[n][n];
   int k=0,t=p;
   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
       if(j<n/2){
         a[i][j]=++k;
       }
       else{
         a[i][j]=t--;
       }
     }
   }
   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
       cout<<a[i][j]<<" ";
     }
     cout<<"\n";
   }
  return 0;
  }