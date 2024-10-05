class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        map<string,int>mp;
        if(s2.length()<s1.length()){
            return false;
        }
            for(int i=0;i<=s2.length()-s1.length();i++){
                string s3=s2.substr(i,s1.length());
                sort(s3.begin(),s3.end());
                mp[s3]++;
            }
        sort(s1.begin(),s1.end());
        if(mp[s1]>0){
            return true;
        }
        return false;
    }
};