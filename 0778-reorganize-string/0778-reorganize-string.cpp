class Solution {
public:
    string reorganizeString(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int n=s.length();
        if(n%2==0){
            for(auto i:mp){
                if(i.second>n/2){
                    return "";
                }
            }
        }
        if(n%2!=0){
           for(auto i:mp){
                if(i.second>1+(n/2)){
                    return "";
                }
            } 
        }
        vector<pair<int,char>>v;
        for(auto i:mp){
            v.push_back(make_pair(i.second,i.first));
        }
        sort(v.rbegin(),v.rend());
        string s1(n,'0');
        int j=0;
        for(int i=0;i<v.size();i++){
            while(v[i].first>0&&j<s1.length()){
                s1[j]=v[i].second;
                v[i].first--;
                j=j+2;
            }
        }
            for(int i=0;i<v.size();i++){
                j=0;
                while(v[i].first>0&&j<s1.length()){
                    if(s1[j]=='0'){
                    s1[j]=v[i].second;
                    v[i].first--;
                    }
                    j++;
                }
            }
        return s1;
    }
};