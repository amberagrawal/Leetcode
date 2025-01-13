class Solution {
public:
    int minimumLength(string s) {
       map<char,int>mp;
       for(int i=0;i<s.length();i++){
        mp[s[i]]++;
       } 
      int count=0;
      for(auto i:mp){
        if(i.second%2==0){
            count=count+2;
        }
        else{
            count=count+1;
        }
      }
      return count;
    }
};