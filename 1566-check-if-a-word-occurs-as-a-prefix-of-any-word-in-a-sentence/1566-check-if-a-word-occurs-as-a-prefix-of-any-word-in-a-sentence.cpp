class Solution {
public:
    int isPrefixOfWord(string s, string t) {
        vector<string>v;
        string s1;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
            s1=s1+s[i];
            if(i==s.length()-1){
                v.push_back(s1);
            }
            }
            else{
                v.push_back(s1);
                s1="";
            }
        }
        for(int i=0;i<v.size();i++){
            string s2=v[i].substr(0,t.length());
            if(s2==t){
                return i+1;
            }
        }
        return -1;
    }
};