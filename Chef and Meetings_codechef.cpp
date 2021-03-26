#include <iostream>
using namespace std;

string convert_to24(string str)
{
    string t;
    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
 
    
    if (str[5] == 'A')
    {
        if (hh == 12)
        {
            t = "00";
            for (int i=2; i <= 4; i++)
                t =t+str[i];
        }
        else
        {
            for (int i=0; i <= 4; i++)
                t=t+str[i];
        }
    }
 
    
    else
    {
        if (hh == 12)
        {
            t = "12";
            for (int i=2; i <= 4; i++)
                t=t+str[i];
        }
        else
        {
            hh = hh + 12;
            t = to_string(hh);
            for (int i=2; i <= 4; i++)
                t=t+str[i];
        }
    }
    return t;
}
void falt(string f){
    for(int i=0;i<5;i++){
        f.size();
    }
}
int remove_Colon(string s) 
{ 
        s.replace(2, 1, ""); 
        return stoi(s); 
} 
  
string diff(string s1, string s2) 
{ 
    int time1 = remove_Colon(s1); 
    int time2 = remove_Colon(s2); 
  
    int hourDiff = time2 / 100 - time1 / 100 - 1; 
  
    
    int minDiff = time2 % 100 + (60 - time1 % 100); 
  
    if (minDiff >= 60) { 
        hourDiff++; 
        minDiff = minDiff - 60; 
    } 
  
     
    string res = to_string(hourDiff) + ':' + to_string(minDiff); 
    falt(s1);
    return res; 
} 

int main() {
    string s,s_am_pm,t1,am_pm1,t2,am_pm2;
	int t = 0,n,i,j;
	cin>>t;
	while(t--){
	    cin>>s;
	    cin>>s_am_pm;
	    cin>>n;
	    string x,y;
	    s = s + s_am_pm;
	    s = convert_to24(s);
	    while(n--){
    	    cin>>t1;
    	    cin>>am_pm1;
    	    cin>>t2;
    	    cin>>am_pm2;
    	    
    	    t1 = t1 + am_pm1;
    	    t2 = t2 + am_pm2;
    	    
    	    t1 = convert_to24(t1);
    	    t2 = convert_to24(t2);
    	     x=diff(t1,s);
    	    y=diff(s,t2);
    	    if(x[0]!='-'&&y[0]!='-'){
    	        cout<<"1";
    	    }
    	    else{
    	        cout<<"0";
    	    }

	    }
	    cout<<"\n";
	}
	return 0;
}