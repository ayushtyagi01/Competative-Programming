class Solution {
    public boolean searchMatrix(int[][] a, int target) {
        int n=a.length;
    if(n==0)
        return false;
        int m=a[0].length;
        int i=0,j=m-1;
         if(m==0)
        return false;
       
        int k=a[i][j];
        
        
       while(i<=n-1&&j>=0){
           k=a[i][j];
          if(target>k){
              i++;
              
          }else if(target<k){
              j--;
              
          }else{
              return true;
          }
       }
        return false;
    }
}