class Solution {
public:
    string makeFancyString(string s) {
        string s1;
        int count=1;
        s1+=s[0];
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                count=1;
            }
            if(count<3){
                s1+=s[i];
            }
        }
        return s1;
    }
};