class Solution {
public:
    int minDeletions(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<int>v;
        for(auto i:mp){
            v.push_back(i.second);
        }
        sort(v.rbegin(),v.rend());
        set<int>s1;
        int count=0;
        for(int i=0;i<v.size();i++){
            auto it=s1.find(v[i]);
            if(it!=s1.end()){
                v[i]=v[i]-1;
                count++;
                while(true){
                auto itt=s1.find(v[i]);
                if(itt==s1.end()){
                    s1.insert(v[i]);
                    break;
                }
                else{
                    if(v[i]>0){
                    v[i]--;
                    count++;
                    }
                    else{
                        break;
                    }
                }
                }
            }
            else{
                s1.insert(v[i]);
            }
        }
        return count;
    }
};