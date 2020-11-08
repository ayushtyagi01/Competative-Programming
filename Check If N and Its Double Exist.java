class Solution {
    public boolean checkIfExist(int[] a) {
        boolean k=false;
        for(int i=0;i<a.length-1;i++){
            {
                for(int j=i+1;j<a.length;j++){
                    if((a[i]==2*a[j])||(a[i]*2==a[j])){
                        k=true;
                        break;
                    }
                }
            }
        }
        return k;
    }
}