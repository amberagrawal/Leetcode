class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int>mp;
        vector<string>v;
       for(int i=0;i<=s.length()-10;i++){
        string s1=s.substr(i,10);
        mp[s1]++;
       } 
       for(auto i:mp){
        if(i.second>1){
            v.push_back(i.first);
        }
       }
       return v;
    }
};