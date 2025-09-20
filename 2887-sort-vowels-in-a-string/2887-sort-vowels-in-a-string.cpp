class Solution {
public:
    string sortVowels(string s) {
        vector<char>v;
        string t=s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'){
                v.push_back(s[i]);
            }
        }
        sort(v.begin(),v.end());
        int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'){
                t[i]=v[j++];
            }
        }
        return t;
    }
};