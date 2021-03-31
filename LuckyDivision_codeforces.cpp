#include<iostream>
using namespace std;
int main(){
 int n,c=0;
 cin>>n;
 int p,r,flag=1;
 for(int i=4;i<=n;i++){
   flag=1;
   c=0;
   p=i;
while(p!=0){
  r=p%10;
  if(r==4||r==7){
    p=p/10;
  }
  else{
    flag=0;
  break;
}
}
if(flag==1){
  if(n%i==0){
    c=1;
    break;
  }
}
 }
 if(c==1)
 cout<<"YES";
 else
 cout<<"NO";
return 0;
}