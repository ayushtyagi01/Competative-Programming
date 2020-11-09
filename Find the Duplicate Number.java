class Solution {
    public int findDuplicate(int[] nums) {
        int a[]= new int[nums.length-1];
        int k=-1;
        for(int i=0;i<nums.length-1;i++){
            a[i]=-1;
        }
          for(int i=0;i<nums.length;i++){
            if(a[nums[i]-1]==-1){
                a[nums[i]-1]=nums[i];
            }
              else{
                  k=a[nums[i]-1];
              }
        }
        return k;
    }
}