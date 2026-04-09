class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        map<int,int>mp;
        for(int i=1;i<=1000;i++){
            for(int j=i;j<=1000;j++){
                if(i*i*i+j*j*j<=n){
                    mp[(i*i*i+j*j*j)]++;
                }
            }
        }
        vector<int>v;
        for(auto i:mp){
            if(i.second>1){
                v.push_back(i.first);
            }
        }
        return v;
    }
};