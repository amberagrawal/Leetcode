class Solution {
public:
    string majorityFrequencyGroup(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int maxi=0;
        map<int,int>mp1;
        for(auto i:mp){
            maxi=i.second;
            mp1[i.second]++;
        }
        for(auto i:mp1){
            if(mp1[maxi]<=i.second){
                maxi=i.first;
            }
        }
        string t;
        for(auto i:mp){
            if(i.second==maxi){
                t=t+i.first;
            }
        }
        return t;
    }
};