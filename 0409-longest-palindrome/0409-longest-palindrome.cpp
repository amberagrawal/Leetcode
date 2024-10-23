class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int odd=0;
        int total=0;
        for(auto i:mp){
            if(i.second%2==0){
                total=total+i.second;
            }
            else{
                total=total+(i.second-1);
                odd++;
            }
        }
        if(odd>0){
            total++;
        }
        return total;
    }
};