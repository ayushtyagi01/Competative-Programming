import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
	    Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		while(n-->0){
		    String s=sc.next();
		    char st[]=s.toCharArray();
		    Arrays.sort(st);
		    s=new String(st);
		    permutation(s,"");
		    System.out.println();
		}
	}
	public static void permutation(String s,String ans){
	    if(s.length()==0){
	        System.out.print(ans+" ");
	        return ;
	    }
	  for(int i=0;i<s.length();i++){
	    char ch=s.charAt(i);
	    String ros=s.substring(0,i)+s.substring(i+1);
	    permutation(ros,ans+ch);
	}
	}
}