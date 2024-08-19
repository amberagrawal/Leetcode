class Solution {
public:
    bool equalFrequency(string word) {
       map<char,int>mp;
       for(int i=0;i<word.size();i++){
        mp[word[i]]++;
       }
       vector<int>v;
       for(auto i:mp){
        v.push_back(i.second);
       }
       sort(v.begin(),v.end());
       if(v.size()==1){
        return true;
       }
       int len=v.size();
       if(v[0]==1&&v[len-1]==1){
        return true;
       }
       if(v[0]!=v[len-1]&&v[0]==v[len-2]&&(abs(v[0]-v[len-1])==1)){
        return true;
       }
       if(v[len-1]!=v[0]&&v[len-1]==v[1]&&v[0]==1){
        return true;
       }
       return false;
    }
};