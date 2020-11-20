/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
	Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    while(t-->0){
	    int n=sc.nextInt();
	    int a[]=new int[n];
	    for(int i=0;i<n;i++){
	        a[i]=sc.nextInt();
	    }
	    int k=sc.nextInt();
	    Arrays.sort(a);
	   
	   int min=a[k-1]-a[0];
	   
	    for(int i=1;i+k<=n;i++){
	       
	        if(min>a[k+i-1]-a[i]){
	            min=a[k+i-1]-a[i];
	        }
	    }
	   
	        System.out.println(min);
	  
	}
}
}