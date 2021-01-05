/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int n=sc.nextInt();
		    int k=sc.nextInt();
		    int x=sc.nextInt();
		    int y=sc.nextInt();
		    if(x==y){
		        System.out.println(n+" "+n);
		    }
		    else if(x>y){
		        int ax=x-y;
		        int ay=0;
		        int bx=n;
		        int by=y-x+n;
		        int cx=n+y-x;
		        int cy=n;
		        int dx=0;
		        int dy=x-y;
		        int res=k%4;
		        if(res==0)
		        System.out.println(ax+" "+ay);
		         if(res==1)
		        System.out.println(bx+" "+by);
		         if(res==2)
		        System.out.println(cx+" "+cy);
		         if(res==3)
		        System.out.println(dx+" "+dy);
		    }else{
		         int ax=y-x;
		        int ay=0;
		        int bx=n;
		        int by=x-y+n;
		        int cx=n+x-y;
		        int cy=n;
		        int dx=0;
		        int dy=y-x;
		        int res=k%4;
		         if(res==3)
		        System.out.println(ax+" "+ay);
		         if(res==2)
		        System.out.println(bx+" "+by);
		         if(res==1)
		        System.out.println(cx+" "+cy);
		         if(res==0)
		        System.out.println(dx+" "+dy);
		    }
		}
	}
}
