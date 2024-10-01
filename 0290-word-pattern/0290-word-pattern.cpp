class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>s1;
        string s2="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
            s2=s2+s[i];
            if(i==s.length()-1){
               s1.push_back(s2); 
            }
            }
            else{
                s1.push_back(s2);
                s2="";
            }
        }
        if(pattern.size()!=s1.size()){
            return false;
        }
       map<string,char>mp1;
       map<char,string>mp2;
       for(int i=0;i<s1.size();i++){
        if(mp1.find(s1[i])!=mp1.end()){
          if(mp1[s1[i]]!=pattern[i]){
            return false;
          }
        }
        else{
            mp1[s1[i]]=pattern[i];
        }
       }
       for(int i=0;i<pattern.size();i++){
       if(mp2.find(pattern[i])!=mp2.end()){
          if(mp2[pattern[i]]!=s1[i]){
            return false;
          }
        }
        else{
            mp2[pattern[i]]=s1[i];
        }
       }
       return true;
    }
};