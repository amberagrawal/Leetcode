class Solution {
public:
    int minOperations(string s) {
        vector<int>v(26,0);
        for(int i=0;i<s.length();i++){
            v[s[i]-'a']++;
        }
        int t=0;
        int c=0;
        for(int i=1;i<26;i++){
            t=t+v[i];
            if(t>0){
            c++;
            }
        }
        return c;
    }
};