class Solution {
public:
    long long minimumSteps(string s) {
        long long count=0;
        int i=0;
        int j=s.length()-1;
        while(i<j){
            while(i<j&&s[j]=='1'){
                j--;
            }
            while(i<j&&s[i]=='0'){
                i++;
            }
            if(i<j){
                count=count+(j-i);
                 i++;
                 j--;
            }
        }
        return count;
    }
};