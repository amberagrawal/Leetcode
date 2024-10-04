class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
       vector<pair<long long,long long>>v;
       sort(skill.begin(),skill.end());
       long long i=0;
       long long j=skill.size()-1;
       while(i<j){
        v.push_back(make_pair(skill[i],skill[j]));
        i++;
        j--;
       }
       long long sum=v[0].first+v[0].second; 
       for(long long i=1;i<v.size();i++){
        if(v[i].first+v[i].second!=sum){
            return -1;
        }
       }
       long long total=0;
       for(long long i=0;i<v.size();i++){
        total=total+(v[i].first*v[i].second);
       }
       return total;
    }
};