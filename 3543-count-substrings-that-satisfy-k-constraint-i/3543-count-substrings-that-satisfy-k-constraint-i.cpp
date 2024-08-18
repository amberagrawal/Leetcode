class Solution {
public:
    int count1(string s){
        int a=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                a++;
            }
        }
        return a;
    }
    int countKConstraintSubstrings(string s, int k) {
        int count=0;
        for(int i=1;i<=s.length();i++){
            for(int j=0;j<=s.length()-i;j++){
              string sub=s.substr(j,i);
              if(count1(sub)<=k||sub.length()-count1(sub)<=k){
                count++;
              }
            }
        }
        return count;
    }
};