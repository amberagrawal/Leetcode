class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& banned) {
       set<string>s(banned.begin(),banned.end());
       int count=0;
       for(auto i:message){
        if(s.find(i)!=s.end()){
            count++;
        }
       }
       if(count>=2){
        return true;
       }
       return false;
    }
};