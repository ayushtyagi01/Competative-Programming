#include<bits/stdc++.h>
using namespace std;

long long int count(long long int n)
{
	long long int dp[n+1],i;
	memset(dp, 0, sizeof(dp));
	dp[0]=1; 
    for (i = 3; i <= n; i++)
    dp[i] += dp[i - 3];
     
    for (i = 5; i <= n; i++)
    dp[i] += dp[i - 5];
     
    for (i = 10; i <= n; i++)
    dp[i] += dp[i - 10];
        
      
	return dp[n];
}

int main(){
    int t;
    cin>>t;
    while(t--){
    long long int n;
    cin>>n;
    cout<<count(n)<<endl;       
    }
    return 0;
}