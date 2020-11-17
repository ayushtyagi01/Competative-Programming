/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
			Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    while(t-->0){
	       int z=0;
	           int n=sc.nextInt();
	        int k=sc.nextInt();
	        int a[]=new int[n];
	          for(int i=0;i<n;i++){
	             a[i]=sc.nextInt();
	        }
	        Arrays.sort(a);
	       for(int i=0;i<n-2;i++){
	            int x=k-a[i];
	         if(sort(a,x,i+1)){
	             z=1;
	         break;
	             
	         }
	         
	    }
	    System.out.println(z);
	}
}
static boolean sort(int A[],int x,int i){
    int j=A.length-1;
     while (i < j) { 
                if (A[i] + A[j]  == x) { 
                     
                    return true; 
                } 
                else if (A[i] + A[j]  < x) 
                    i++; 
  
                else 
                j--;
            } 
            return false;
}
}