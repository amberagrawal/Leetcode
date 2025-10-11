class Solution {
public:
    vector<long long>dp;
    long long f(long long i,vector<pair<long long,long long>>&v){
        if(i>=v.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        long long a=f(i+1,v);
        long long b=0;
        long long j=i+1;
        while(j<v.size()&&v[j].first<=v[i].first+2){
            j++;
        }
        b=v[i].first*v[i].second+f(j,v);
        return dp[i]=max(a,b);
    }
    long long maximumTotalDamage(vector<int>& power) {
        dp=vector<long long>(power.size(),-1);
        map<long long,long long>mp;
        for(long long i=0;i<power.size();i++){
            mp[power[i]]++;
        }
        vector<pair<long long,long long>>v;
        for(auto i:mp){
            v.push_back({i.first,i.second});
        }
        return f(0,v);
    }
};