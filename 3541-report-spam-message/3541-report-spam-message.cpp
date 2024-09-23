class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& banned) {
       map<string,int>mp;
       for(int i=0;i<banned.size();i++){
        mp[banned[i]]++;
       }
       int count=0;
       for(auto i:message){
        if(mp.find(i)!=mp.end()){
            count++;
        }
       }
       if(count>=2){
        return true;
       }
       return false;
    }
};