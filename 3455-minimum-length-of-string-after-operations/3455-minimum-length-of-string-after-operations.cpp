class Solution {
public:
    int minimumLength(string s) {
       map<char,int>mp;
       for(int i=0;i<s.length();i++){
        mp[s[i]]++;
       } 
       int count=0;
       for(auto i=mp.begin();i!=mp.end();i++){
        if((i->second)%2!=0&&(i->second)!=1){
            count=count+(i->second)-1;
        }
        else if((i->second)%2==0&&(i->second)>3){
            int x=(i->second)-1;
            count=count+x-1;
        }
       }
       int a=s.length()-count;
       return a;
    }
};