class Solution {
public:
    bool check(string s){
        string s1="qwertyuiop";
        string s2="asdfghjkl";
        string s3="zxcvbnm";
        int a=-1;
            for(int i=0;i<s.length();i++){
                size_t pos1=s1.find(tolower(s[i]));
                size_t pos2=s2.find(tolower(s[i]));
                size_t pos3=s3.find(tolower(s[i]));
                if(pos1!=string::npos){
                    if(a==-1||a==1){
                    a=1;
                    }
                    else{
                        return false;
                    }
                }
                if(pos2!=string::npos){
                     if(a==-1||a==2){
                    a=2;
                    }
                    else{
                        return false;
                    }
                }
                if(pos3!=string::npos){
                    if(a==-1||a==3){
                    a=3;
                    }
                    else{
                        return false;
                    }
                }
            }
            return true;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string>v;
        for(int i=0;i<words.size();i++){
            if(check(words[i])){
                v.push_back(words[i]);
            }
        }
        return v;
    }
};