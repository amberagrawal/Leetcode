class Solution {
public:
    int distinctPoints(string s, int k) {
        set<pair<int,int>>s1;
        int u=0;
        int d=0;
        int r=0;
        int l=0;
        int lo=0;
        int hi=k-1;
        for(int i=0;i<k;i++){
            if(s[i]=='U'){
                u++;
            }
            if(s[i]=='D'){
                d++;
            }
            if(s[i]=='L'){
                l++;
            }
            if(s[i]=='R'){
                r++;
            }
        }
        s1.insert({u-d,l-r});
        while(hi+1<s.length()){
            hi++;
            if(s[hi]=='U'){
                u++;
            }
            if(s[hi]=='D'){
                d++;
            }
            if(s[hi]=='L'){
                l++;
            }
            if(s[hi]=='R'){
                r++;
            }
            if(s[lo]=='U'){
                u--;
            }
            if(s[lo]=='D'){
                d--;
            }
            if(s[lo]=='L'){
                l--;
            }
            if(s[lo]=='R'){
                r--;
            }
            lo++;
            s1.insert({u-d,l-r});
        }
        return s1.size();
    }
};