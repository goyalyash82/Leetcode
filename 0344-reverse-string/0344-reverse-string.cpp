class Solution {
public:
    void reverseString(vector<char>& s) {
        
        reverse(s.begin(),s.end());
        cout<<"[";
        for(int i=0;i<s.size();i++){
            cout << "'" << s[i] << "'";
            if (i != s.size() - 1)
                cout << ",";

        }
        cout<<"]";
    }
};