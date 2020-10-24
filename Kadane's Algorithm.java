
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int n=sc.nextInt();
		    int a[]=new int[n];
		    for(int i=0;i<n;i++){
		        a[i]=sc.nextInt();
		        }
		        int max_global=a[0];
		        int max_local=a[0];
		        for(int i=1;i<n;i++){
                    max_local=Math.max(max_local+a[i],a[i]);
                    if(max_local>max_global){
                        max_global=max_local;
                    }
		        }
		        System.out.println(max_global);
		}
	}
}