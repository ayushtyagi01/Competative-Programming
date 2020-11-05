class Solution {
    public void merge(int[] a, int n, int[] b, int m) {
        for(int i=0;i<m;i++){
            a[n+i]=b[i];
        }
        Arrays.sort(a);
        
    }
}