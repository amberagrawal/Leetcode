class Solution {
public:
    bool isCircularSentence(string s) {
        string s1="";
        string f;
        int i=0;
        while(i<s.length()){
            if(s[i]!=' '){
                s1+=s[i];
            }
            else{
                break;
            }
            i++;
        }
        f=s1;
        s1="";
        string back=f;
        i++;
        while(i<s.length()){
            if(s[i]!=' '){
                s1+=s[i];
               if (!s1.empty() && !back.empty() && s1[0] != back[back.length() - 1]) {
    return false;
}
            }
            else{
                back=s1;
                s1="";
            }
            i++;
        }
       if (!s1.empty() && s1[s1.length() - 1] != f[0]) {
    return false;
}
int a=0;
for(int i=0;i<s.length();i++){
if(s[i]==' '){
    a++;
    break;
}
}
if(a==0){
    if(s[0]!=s[s.length()-1]){
        return false;
    }
    return true;
}
        return true;
    }
};