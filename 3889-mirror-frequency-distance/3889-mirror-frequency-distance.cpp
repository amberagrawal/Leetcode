class Solution {
public:
    int mirrorFrequency(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int c=0;
        for(int i=0;i<13;i++){
            c=c+abs(mp[i+'a']-mp[25-i+'a']);
        }
        for(int i=0;i<5;i++){
            c=c+abs(mp[i+'0']-mp[9-i+'0']);
        }
        return c;
    }
};