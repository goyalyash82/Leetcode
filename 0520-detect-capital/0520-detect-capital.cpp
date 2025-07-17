class Solution {
public:
    bool detectCapitalUse(string word) {
        int a=0,b=0,c=0;
        for(int i=0;i<word.size();i++){
            if(isupper(word[i])){
                a++;
            }
            else if(islower(word[i])){
                b++;
            }
            else{
                c++;
            }
        }
        if(isupper(word[0]) && a==1){
            return true;
        }
        if(a==word.size()||b==word.size()) return true;
    else{return false;}
    }
};