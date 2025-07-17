class Solution {
public:
    char findTheDifference(string s, string t) {
        char a;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        // string s2="9";
        // s.append(s2);

        for(int i=0;i<t.size();i++){
            if(s[i]!= t[i]){
                return t[i];

            }
            
        }
        return t.back();
    }
};