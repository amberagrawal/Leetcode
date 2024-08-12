class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
       ios::sync_with_stdio(false);
       cin.tie(nullptr); 
        vector<int>output;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            for(int j=0;j<s.size();j++){
                if(s[j]==x){
                    output.push_back(i);
                    break;
                }
            }
        }
        return output;
    }
};