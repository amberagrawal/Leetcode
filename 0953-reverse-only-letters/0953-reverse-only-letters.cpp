class Solution {
public:
    string reverseOnlyLetters(string s) {
        string s1;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'){
                s1=s1+s[i];
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                s1=s1+s[i];
            }
        }
        reverse(s1.begin(),s1.end());
        int j=0;
        for(int i=0;i<s.length()&&j<s1.length();i++){
            if(s[i]>='a'&&s[i]<='z'){
                s[i]=s1[j];
                j++;
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                s[i]=s1[j];
                j++;
            }
        }
        return s;
    }
};