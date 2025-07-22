class Solution {
public:
    int mySqrt(int x) {
        int ct=0;
      if(x==1) return 1;
        for(int i=1;i<x;i++){
            if(((1LL*i*i)<=x) &&(1LL*(i+1)*(i+1)>x)){
                 ct=i;
                 break;
            }
        }
        return ct;
    }
};