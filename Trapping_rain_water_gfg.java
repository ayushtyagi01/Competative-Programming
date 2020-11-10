/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args)throws IOException {
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		 
		 int t=Integer.parseInt(br.readLine());
       while(t-->0){
        int n =Integer.parseInt(br.readLine()); 
  int arr[] = new int[n];
  String st[]=br.readLine().split(" ");
  for(int i=0;i<n;i++){
      arr[i]=Integer.parseInt(st[i]);
  }
  
        System.out.println(findWater(arr, n)); 
	}
	}
	 static int findWater(int arr[], int n) 
    { 
       
        int result = 0; 
  
        int left_max = 0, right_max = 0; 
  
       
        int lo = 0, hi = n - 1; 
  
        while (lo <= hi) { 
            if (arr[lo] < arr[hi]) { 
                if (arr[lo] > left_max) 
  
                    left_max = arr[lo]; 
                else
 
                    result += left_max - arr[lo]; 
                lo++; 
            } 
            else { 
                if (arr[hi] > right_max) 
  
                    // update right maximum 
                    right_max = arr[hi]; 
  
                else
                    result += right_max - arr[hi]; 
                hi--; 
            } 
        } 
  
        return result; 
    } 
}