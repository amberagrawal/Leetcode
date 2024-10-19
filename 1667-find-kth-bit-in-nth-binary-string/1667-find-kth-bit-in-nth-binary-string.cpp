class Solution {
public:
        string solve(string x){
            for(int j=0;j<x.length();j++){
                if(x[j]=='1'){
                    x[j]='0';
                }
                else{
                    x[j]='1';
                }
            }
            reverse(x.begin(),x.end());
            return x;
        }
    char findKthBit(int n, int k) {
        string s="0";
        for(int i=1;i<=n;i++){
            s=s+"1"+solve(s);
        }
        return s[k-1];
    }
};