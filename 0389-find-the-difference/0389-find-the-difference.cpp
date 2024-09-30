class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i=0;i<t.length();i++){
            size_t pos=s.find(t[i]);
            if(pos==string::npos){
                return t[i];
            }
            else{
                s[pos]='?';
            }
        }
        return '-1';
    }
};