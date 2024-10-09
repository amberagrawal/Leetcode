class Solution {
public:
    int minAddToMakeValid(string s) {
        int a=0;
        int mis=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                a++;
            }
            else if(s[i]==')'){
                if(a>0){
                    a--;
                }
                else{
                    mis++;
                }
            }
        }
        if(a!=0){
            mis=mis+a;
        }
        return mis;
    }
};