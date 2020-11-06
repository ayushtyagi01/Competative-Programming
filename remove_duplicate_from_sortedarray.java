class Solution {
    public int removeDuplicates(int[] a) {
        int n=a.length;
        int k=1;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                a[k]=a[i];
                k++;
            }
        }
        return k;
    }
}