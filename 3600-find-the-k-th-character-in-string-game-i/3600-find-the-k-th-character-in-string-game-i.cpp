class Solution {
public:
    char kthCharacter(int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        string s="a";
        while(s.length()<k){
            string s1=s;
            for(int i=0;i<s.length();i++){
                if(s[i]=='z'){
                    s1=s1+'a';
                }
                else{
                    s1=s1+(char)(s[i]+1);
                }
            }
            s=s1;
        }
        return s[k-1];
    }
};