class Solution {
public:
    int minimumPushes(string word) {
       map<char,int>mp;
       for(int i=0;i<word.size();i++){
        mp[word[i]]++;
       }
       vector<pair<int,char>>v;
       for(auto i=mp.begin();i!=mp.end();i++){
        v.push_back(make_pair(i->second,i->first));
       }
       sort(v.rbegin(),v.rend());
       int count=0;
       int sum=0;
       for(int i=0;i<v.size();i++){
        if(count<8){
            count++;
            sum=sum+v[i].first;
        }
        else{
            sum=sum+(v[i].first)*((count/8)+1);
            count++;
        }
       }
       return sum;
    }
};