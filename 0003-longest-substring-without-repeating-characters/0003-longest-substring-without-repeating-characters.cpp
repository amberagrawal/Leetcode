class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>s1;
        int right=0;
        int left=0;
        int maxi=0;
        while(right<s.length()){
            if(s1.find(s[right])==s1.end()){
                s1.insert(s[right]);
                right++;
            maxi=max(maxi,right-left);
            }
            else{
                s1.erase(s[left]);
                left++;
            }
        }
        return maxi;
    }
};