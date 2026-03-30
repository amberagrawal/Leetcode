class Solution {
public:
    bool checkStrings(string s, string t) {
        string s1;
        string s2;
        string t1;
        string t2;
        for(int i=0;i<s.length();i++){
            if(i&1){
                s1.push_back(s[i]);
                t1.push_back(t[i]);
            }
            else{
                s2.push_back(s[i]);
                t2.push_back(t[i]);
            }
        }
        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());
        sort(s2.begin(),s2.end());
        sort(t2.begin(),t2.end());
        if(t1==s1&&s2==t2){
            return true;
        }
        return false;
    }
};