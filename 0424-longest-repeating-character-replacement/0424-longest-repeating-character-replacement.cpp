class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>v(26,0);
        int r=0;
        int l=0;
        int maxi=0;
        int mx=0;
        while(r<s.length()){
            v[s[r]-'A']++;
            mx=max(mx,v[s[r]-'A']);
            while(r-l+1-mx>k&&l<=r){
                v[s[l]-'A']--;
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};