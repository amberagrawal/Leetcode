class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
       map<char,int>mp1;
       int total=0;
       for(int i=0;i<chars.size();i++){
        mp1[chars[i]]++;
       }
       for(int i=0;i<words.size();i++){
        string s=words[i];
        map<char,int>mp2;
        for(int j=0;j<s.length();j++){
            mp2[s[j]]++;
        }
        bool check=true;
        for(auto it:mp2){
            if(mp1[it.first]<it.second){
                check=false;
                break;
            }
        }
        if(check){
            total=total+s.length();
        }
       }
       return total;
    }
};