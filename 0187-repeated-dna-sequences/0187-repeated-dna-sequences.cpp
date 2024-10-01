class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        map<string,int>mp;
        vector<string>v;
        if(s.size()<10){
            return v;
        }
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