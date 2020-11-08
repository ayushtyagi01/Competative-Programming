class Solution {
    public int findNumbers(int[] a) {
        int c=0,k=0;
        for(int i=0;i<a.length;i++){
            c=0;
            while(a[i]!=0){
                a[i]=a[i]/10;
                c++;
            }
            if(c%2==0)
                k++;
        }
        return k;
    }
}