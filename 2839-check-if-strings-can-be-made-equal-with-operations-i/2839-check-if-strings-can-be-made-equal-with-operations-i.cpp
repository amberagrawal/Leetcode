class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        int i=n-3;
        int j=m-3;
        while(i>=0&&j>=0){
            if(s1[i]==s2[j]){

            }
            else{
                if(s1[i+2]==s2[j]&&s1[i]==s2[j+2]){
                    swap(s1[i],s1[i+2]);    
                }
                else if(s2[j+2]==s1[i]&&s2[j]==s1[i+2]){
                    swap(s2[j+2],s2[j]);
                }
                else{
                    return false;
                }
            }
            i--;
            j--;
        }
        if(s1[n-1]!=s2[m-1]){
            return false;
        }
        if(n>1&&s1[n-2]!=s2[m-2]){
            return false;
        }
        return true;
    }
};