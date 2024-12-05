class Solution {
public:
    bool canChange(string s, string t) {
        int i=0;
        int j=0;
        int n=s.length();
        int m=t.length();
        while(i<n&&s[i]=='_'){
                i++;
        }
        while(j<m&&t[j]=='_'){
                j++;
        }
        while(i<n&&j<m){
            if(s[i]!=t[j]){
                return false;
            }
            if(s[i]==t[j]){
                if(s[i]=='L'&&i<j){
                    return false;
                }
                if(s[i]=='R'&&i>j){
                    return false;
                }
                i++;
                j++;
                while(i<n&&s[i]=='_'){
                i++;
                }
                while(j<m&&t[j]=='_'){
                j++;
                }
                if(i==n&&j==m){
                    return true;
                }
                else if(i==n||j==m){
                    return false;
                }
            }
        }
        if(i==n&&j==m){
                    return true;
                }
                else if(i==n||j==m){
                    return false;
                }
        return true;
    }
};