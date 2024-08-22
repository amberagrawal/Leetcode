class Solution {
public:
    int findComplement(int num) {
      ios::sync_with_stdio(false);
      cin.tie(nullptr);  
      string s;
      while(num>0){
        s.push_back(num%2+'0');
        num=num/2;
      }
      for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            s[i]='0';
        }
        else if(s[i]=='0'){
            s[i]='1';
        }
      }
      
      int ans=0;
      for(int i=0;i<s.length();i++){
        ans=ans+((s[i]-'0')*(pow(2,i)));
      }
      return ans;
    }
};