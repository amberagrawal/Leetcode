class TopVotedCandidate {
public:
    map<int,int>mp;
    vector<pair<int,int>>v;
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        int maxi=persons[0];
        for(int i=0;i<persons.size();i++){
            mp[persons[i]]++;
            if(mp[persons[i]]>=mp[maxi]){
                v.push_back({times[i],persons[i]});
                maxi=persons[i];
            }
            else{
                v.push_back({times[i],maxi});
            }
        }
    }
    
    int q(int t) {
        int i=0;
        while(i<v.size()&&v[i].first<=t){
            i++;
            if(v[i].first>t){
                return v[i-1].second;
            }
        }
        return v[v.size()-1].second;
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */