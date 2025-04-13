class Solution {
    public int reverse(int x) {
        int rev=0,y=0;
        while(x!=0){
            int n=x%10;
            rev=y*10+n;
        if((rev-n)/10!=y){
            return 0;
        }
        y=rev;
        x/=10;

        }
        
        return y;
    }
    
}