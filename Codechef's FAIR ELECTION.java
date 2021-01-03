/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		try{
		    Scanner sc=new Scanner(System.in);
		    int t=sc.nextInt();
		    while(t-->0){
		        int n=sc.nextInt();
		        int m=sc.nextInt();
		        int sum1=0,sum2=0;
		        int a[]=new int[n];
		        int b[]=new int[m];
		        for(int i=0;i<n;i++){
		            a[i]=sc.nextInt();
		            sum1=sum1+a[i];
		        }
		          for(int i=0;i<m;i++){
		            b[i]=sc.nextInt();
		            sum2=sum2+b[i];
		        }
		      
		      
		        int k=0;
		        Arrays.sort(a);
		        Arrays.sort(b);
		        int i=0,temp=0,flag=0;
		       if(sum1>sum2){
		           flag=1;
		       }
		       else{
		           while(i<n&&i<m){
		               temp=a[i];
		                a[i]=b[m-i-1];
		                b[m-i-1]=temp;
		                sum1=sum1+a[i]-b[m-i-1];
		                sum2=sum2+b[m-i-1]-a[i];
		                k++;
		                
		                if(sum1>sum2){
		                    flag=1;
		                    break;
		                }
		                i++;
		           }
		       }
		        if(flag==1)
		          System.out.println(k);
		          else
		          System.out.println("-1");
		    
		    }
		}
		catch(Exception e){
		    
		}
	}
}
