class Solution {
    public boolean isPalindrome(int x) {
       
        if(x<0){
            return false;
        }
        if(x==0){
            return true;

        }
        int new_x=0;
        int dup_x=x;
        while (dup_x>0){
            int last_digit=dup_x%10;
            new_x=new_x*10+last_digit;
            dup_x/=10;
                
        }
        return new_x == x;
         
        
            
    }

        
    
}