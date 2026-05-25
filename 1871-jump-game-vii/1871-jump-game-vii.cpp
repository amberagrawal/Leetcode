class Solution {
public:
    bool canReach(string s, int mini, int maxi) {
        vector<int>v;
        if(s[s.length()-1]=='1'){
            return false;
        }
        v.push_back(s.length()-1);
        vector<bool>f(s.length(),false);
        for(int i=s.length()-2;i>=0;i--){
            if(s[i]=='0'){
                for(int j=v.size()-1;j>=0;j--){
                    int a=v[j];
                    if(i+mini<=a&&a<=min(i+maxi,(int)s.length()-1)){
                        f[i]=true;
                        v.push_back(i);
                        break;
                    }
                }
            }
        }
        return f[0];
    }
};