/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger; 

class GFG {
	public static void main (String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    while(t-->0){
	        int n=sc.nextInt();
		BigInteger b=BigInteger.ONE;
	for(int i=n;i>=1;i--){
	    b=b.multiply(BigInteger.valueOf(i));
	}
	        System.out.println(b);
	    }
	}
}