class Solution {
public:
    vector<string> stringSequence(string target) {
        string s="";
        vector<string>s1;
        for(int i=0;i<target.length();i++){
            s=s+"a";
            int p=1;
            if(s[i]==target[i]){
                s1.push_back(s);
            }
            else{
            while(s[i]!=target[i]){
                s1.push_back(s);
                s[i]=(char)(97+p);
                p++;
            }
            s1.push_back(s);
            }
        }
        return s1;
    }
};