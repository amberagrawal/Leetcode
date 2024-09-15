class Solution {
public:
    bool count(string s){
        map<char,long long>mp;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                mp[s[i]]++;
            }
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
               if(mp[s[i]]%2!=0){
                return false;
               }
            }
        }
        return true;
    }
    int findTheLongestSubstring(string s) {
        if(s.length()==1){
            return 0;
        }
        for(int len=s.length();len>=1;len--){
            for(int i=0;i<=s.length()-len;i++){
                string s1=s.substr(i,len);
                if(count(s1)){
                    return len;
                }
            }
        }
        return 0;
    }
};