class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       string s1="";
       int maxi=0;
       int i=0;
       while(i<s.length()){
        size_t pos=s1.find(s[i]);
        if(pos!=string::npos){
         s1 = s1.substr(pos + 1);

         s1=s1+s[i];
        }
        else{
            s1=s1+s[i];
        }
        if(maxi<s1.length()){
           maxi=s1.length();
        }
        i++;
       }
       return maxi;
    }
};