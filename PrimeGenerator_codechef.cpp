#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int f,l;
	    cin>>f>>l;
	    int flag=0;
	    for(int i=f;i<=l;i++)
	    {
	       flag=0;
	       if(i==1 ||i==0)
	       {
	            continue;
	       }
    	    for(int j=2;j<=sqrt(i);j++)
    	    {
    	        if(i%j==0)
    	        {
    	           flag=1;
    	           break;
    	        }
    	   }
    	   if(flag==0)
    	   {
    	       cout<<i<<endl;
    	   }
        }
	    cout<<endl;
    }
    return 0;
}
