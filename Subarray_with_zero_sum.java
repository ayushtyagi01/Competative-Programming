// { Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
			//code
			
		//taking input using class Scanner
		Scanner scan = new Scanner(System.in);
		
		//taking total number of testcases
		int t = scan.nextInt();
		while(t>0)
		{
		    //taking total count of elements
		    int n = scan.nextInt() ;
		    
		    //Declaring and Initializing an array of size n
		    int arr[] = new int[n];
		    
		    //adding elements to the array
		    for(int i = 0; i<n;i++)
		    {
		        arr[i] = scan.nextInt();
		    }
		    
		    t--;
		    
		     //calling the method findSum
		     //and print "YES" or "NO" based on the result
		     System.out.println(findsum(arr,n)==true?"Yes":"No");
		}
	}
	
	
 // } Driver Code Ends


//Complete this function


static boolean findsum(int a[],int n)
{
    Set<Integer> s= new HashSet<>();
    s.add(0);
    int sum=0;
    boolean k=true;
  for(int i=0;i<n;i++){
      sum=sum+a[i];
      if(!s.contains(sum)){
          s.add(sum);
          k=false;
      }
      else{
          k=true;
          break;
      }
  }
  return k;
}

// { Driver Code Starts.
	
	
}  // } Driver Code Ends