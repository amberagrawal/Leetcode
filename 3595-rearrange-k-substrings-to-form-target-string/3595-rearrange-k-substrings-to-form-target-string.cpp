class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        if(s.length()!=t.length()){
            return false;
        }
        else if(s.length()%k!=0){
            return false;
        }
        else{
            int a=s.length()/k;
            vector<string>v1;
            vector<string>v2;
            for(int i=0;i<s.length();i=i+a){
                string s1=s.substr(i,a);
                v1.push_back(s1);
            }
            for(int i=0;i<t.length();i=i+a){
                string s1=t.substr(i,a);
                v2.push_back(s1);
            }
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            for(int i=0;i<v1.size();i++){
                if(v1[i]!=v2[i]){
                    return false;
                }
            }
            return true;
        }
    }
};