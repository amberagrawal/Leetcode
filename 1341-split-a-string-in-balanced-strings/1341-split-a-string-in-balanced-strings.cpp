class Solution {
public:
    int balancedStringSplit(string s) {
      ios::sync_with_stdio(false);
      cin.tie(nullptr);  
      int total=0;
      char a=s[0];
      int i=0;
      int count=0;
      int count1=0;
      while(i<s.length()){
       if(s[i]!=a){
        count1++;
        if(count1==count){
            total++;
            count=0;
            count1=0;
        }
       }
       if(s[i]==a){
        count++;
        if(count1==count){
            total++;
            count=0;
            count1=0;
        }
       }
       i++;
      }
      return total;
    }
};