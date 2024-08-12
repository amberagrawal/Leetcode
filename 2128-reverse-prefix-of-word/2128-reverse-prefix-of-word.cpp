class Solution {
public:
    string reversePrefix(string word, char ch) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
      for(int i=0;i<word.length();i++){
        if(word[i]==ch){
            reverse(word.begin(),word.begin()+i+1);
            return word;
        }
      }  
      return word;
    }
};