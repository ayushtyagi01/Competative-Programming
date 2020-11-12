class Solution {
    public int maxProfit(int[] a) {
        int local_profit=0,global_profit=0,global_sell=0;
        if(a.length>0){
        global_sell=a[a.length-1];
        for(int i=a.length-1;i>=0;i--){
        local_profit=global_sell-a[i];
            if(local_profit>global_profit){
                global_profit=local_profit;
                
            }
            else if(a[i]>global_sell){
                global_sell=a[i];
            }
           
        }
        return global_profit;
        }
        else
            return global_profit;
    }
}
