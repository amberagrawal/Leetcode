class Solution {
public:
    string reverseVowels(string s) {
        vector<char>v;
        for(int i=0;i<s.length();i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u'){
                v.push_back(s[i]);
                s[i]='%';
            }
        }
        reverse(v.begin(),v.end());
        int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='%'){
                s[i]=v[j];
                j++;
            }
        }
        return s;
    }
};