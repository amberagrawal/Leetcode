class Solution {
public:
    int lengthOfLastWord(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int i=s.length()-1;
        while(i>=0&&s[i]==' '){
         i--;
        }
        int count=0;
        while(i>=0&&s[i]!=' '){
            count++;
            i--;
        }
        return count;
    }
};