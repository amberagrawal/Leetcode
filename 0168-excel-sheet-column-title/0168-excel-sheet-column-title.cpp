class Solution {
public:
    string convertToTitle(int n) {
        string s="";
        map<int,char>mp;
        for(int i=0;i<26;i++){
            mp[i]=(char)(65+i);
        }
        while(n>0){
            n--;
            s=mp[n%26]+s;
            n=n/26;
        }
        return s;
    }
};