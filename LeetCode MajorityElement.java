class Solution {
    public int majorityElement(int[] a) {
        int n=a.length;
       Arrays.sort(a);
    int k=0;
         k=a[n/2];   
        
        return k;
    }
}