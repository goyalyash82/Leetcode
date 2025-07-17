class Solution {
public:
    bool isPalindrome(string s) {
         int n=s.length();
      string s2;
      for(int i=0;i<n;i++){
        if(isalnum(s[i])){
            s2+=tolower(s[i]);
        }

      }  
      string rev_s2=s2;
      reverse(rev_s2.begin(),rev_s2.end());
      if(s2== rev_s2){
        return true;
      }
      else{
        return false;
      }
    
    }
};