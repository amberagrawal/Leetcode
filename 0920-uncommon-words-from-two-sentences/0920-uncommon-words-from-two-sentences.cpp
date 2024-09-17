class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>v1;
        string s="";
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=' '){
                s=s+s1[i];
            }
            else{
                v1.push_back(s);
                s="";
            }
            if(s1[i]!=' '&&i==s1.length()-1){
                v1.push_back(s);
            }
        }
        string z="";
        for(int i=0;i<s2.length();i++){
            if(s2[i]!=' '){
                z=z+s2[i];
            }
            else{
                v1.push_back(z);
                z="";
            }
            if(s2[i]!=' '&&i==s2.length()-1){
                v1.push_back(z);
            }
        }
        map<string,int>mp;
        for(int i=0;i<v1.size();i++){
            mp[v1[i]]++;
        }
        vector<string>v;
        for(auto i:mp){
            if(i.second==1){
                v.push_back(i.first);
            }
        }
        return v;
    }
};