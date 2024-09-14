class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        map<string,int>mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        vector<pair<int,string>>v;
        for(auto i:mp){
            v.push_back(make_pair(i.second,i.first));
        }
        sort(v.begin(),v.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
            if (a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        });
        int len=1;
        vector<string>v1;
        int i=0;
        while(k--){
            v1.push_back(v[i].second);
            i++;
        }
        return v1;
    }
};