//User function Template for Java

class Solution {
    int getMinDiff(int[] a, int n, int k) {
        Arrays.sort(a);
        int small=a[0]+k;
        int big=a[n-1]-k;
        int diff=a[n-1]-a[0];
        int temp;
        
        if(small>big){
            temp=small;
            small=big;
            big=temp;
        }
        for(int i=1;i<n-1;i++){
            int add=a[i]+k;
            int sub=a[i]-k;
            if(sub>=small || add<=big)
            continue;
            
            if(add-small>=big-sub)
                small=sub;
            else
                big=add;
            
        }
        return Math.min(diff,big-small);


//  Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            inputLine = br.readLine().trim().split(" ");
            int k = Integer.parseInt(inputLine[0]);
            inputLine = br.readLine().trim().split(" ");
            int n = Integer.parseInt(inputLine[0]);
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            int ans = new Solution().getMinDiff(arr, n, k);
            System.out.println(ans);
        }
    }
}// } Driver Code Ends



        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
}
