class Solution {
public:
    bool canConstruct(string s, string t) {
      vector<int>v1(26,0);
      vector<int>v2(26,0);
      for(int i=0;i<t.length();i++){
        v1[t[i]-'a']++;
      }
      for(int i=0;i<s.length();i++){
        v2[s[i]-'a']++;
      }
      for(int i=0;i<26;i++){
        if(v1[i]<v2[i]){
            return false;
        }
      }
      return true;
    }
};