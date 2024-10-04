class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'){
                s1+=s[i];
            }
            if(s[i]>='A'&&s[i]<='Z'){
                s1+=tolower(s[i]);
            }
            if(s[i]>='0'&&s[i]<='9'){
                s1+=s[i];
            }
        }
        int i=0;
        int j=s1.length()-1;
        while(i<=j){
            if(s1[i]!=s1[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};