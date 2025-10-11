class Solution {
public:
    string removeSubstring(string s, int k) {
        vector<pair<char,int>>v;
        for(int i=0;i<s.length();i++){
            if(!v.empty()&&v.back().first==s[i]){
                v.back().second++;
            }
            else{
                v.push_back({s[i],1});
            }
            int n=v.size();
            if(n>=2&&v[n-1].first==')'&&v[n-1].second==k&&v[n-2].first=='('&&v[n-2].second>=k){
                v[n-2].second -= k;
                v.pop_back();
                if (v.back().second == 0) {
                    v.pop_back();
                }
            }
        }
        string t;
        for(int i=0;i<v.size();i++){
            int a=v[i].second;
            char ch=v[i].first;
            for(int j=0;j<a;j++){
                t+=ch;
            }
        }
        return t;
    }
};