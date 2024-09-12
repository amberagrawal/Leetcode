class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int count=0;
        for(int i=0;i<words.size();i++){
          for(int a=0;a<words[i].size();a++){
           int p=0;
            for(int j=0;j<allowed.size();j++){
             if(words[i][a]!=allowed[j]){
                p++;
             }   
            }
            if(p==allowed.size()){
                break;
            }
            if(a==words[i].size()-1&&p<allowed.size()){
                count++;
            }
          }
        }
        return count;
    }
};