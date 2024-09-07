class Solution {
public:
    int getLucky(string s, int k) {
        string ch="";
        for(int i=0;i<s.length();i++){
        ch=ch+to_string(s[i]-'a'+1);
        }
        while(k>0){
            int b=0;
            for(int i=0;i<ch.length();i++){
                b=b+(ch[i]-'0');
            }
            ch=to_string(b);
            k--;
        }
        return stoi(ch);
    }
};