class Solution {
public:
    bool canConstruct(string s, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int odd=0;
        for(auto i:mp){
            if(i.second%2!=0){
                odd++;
            }
        }
        if(s.length()<k){
            return false;
        }
        if(odd>k){
            return false;
        }
        return true;
    }
};