class Solution {
public:
    bool judgeCircle(string s) {
        int a=0;
        int b=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L'){
                a--;
            }
            else if(s[i]=='R'){
                a++;
            }
            else if(s[i]=='U'){
                b--;
            }
            else{
                b++;
            }
        }
        if(a==0&&b==0){
            return true;
        }
        return false;
    }
};