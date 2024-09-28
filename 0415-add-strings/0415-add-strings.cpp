class Solution {
public:
    string addStrings(string a, string b) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if(a.length()>b.length()){
            while(a.length()!=b.length()){
                b='0'+b;
            }
        }
        else{
           while(a.length()!=b.length()){
                a='0'+a;
            } 
        }
        int carry=0;
        string s(a.length(),'0');
        for(int i=a.length()-1;i>=0;i--){
            int sum=(a[i]-'0')+(b[i]-'0')+carry;
                s[i]=(sum%10)+'0';
                carry=sum/10;
        }
        if(carry > 0) {
            s = '1' + s;
        }
        return s;
    }
};