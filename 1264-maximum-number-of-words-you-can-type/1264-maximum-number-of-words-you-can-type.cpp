class Solution {
public:
    int canBeTypedWords(string p, string t) {
        unordered_set<char>s(t.begin(),t.end());
        int c=0;
        bool a=true;
        for(int i=0;i<p.size();i++){
            if(p[i]==' '){
                if(a){
                    c++;
                }
                a=true;
            }
            else{
                if(s.count(p[i])){
                    a=false;
                }
            }
        }
        if(a){
            c++;
        }
        return c;
    }
};