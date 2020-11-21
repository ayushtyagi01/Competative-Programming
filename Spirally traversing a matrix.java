// { Driver Code Starts


import java.io.*;
import java.util.*;
class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int r = sc.nextInt();
            int c = sc.nextInt();
            
            int matrix[][] = new int[r][c];
            
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                 matrix[i][j] = sc.nextInt();
            }
            Solution ob = new Solution();
            ArrayList<Integer> ans = ob.spirallyTraverse(matrix, r, c);
            for (Integer val: ans) 
                System.out.print(val+" "); 
            System.out.println();
        }
    }
}// } Driver Code Ends




class Solution{
    static ArrayList<Integer> spirallyTraverse(int matrix[][], int r, int c)
    {
        ArrayList<Integer> a=new ArrayList<>();
      int p=0,q=0;
      while(p<r&&q<c){
          for(int i=q;i<c;i++){
              a.add(matrix[p][i]);
          }
          p++;
          for(int i=p;i<r;i++){
             a.add(matrix[i][c-1]);
          }
          c--;
          if(p<r)
          for(int i=c-1;i>=q;i--){
            a.add(matrix[r-1][i]);  
      }
      r--;
      if(q<c)
      for(int i=r-1;i>=p;i--){
         a.add(matrix[i][q]);
      }
      q++;
    }
    return a;
}
}
