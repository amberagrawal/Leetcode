class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int j=1;
        for(auto& i:mp){
            i.second=j;
            j++;
        }
        vector<int>v1(arr.size(),0);
        for(int i=0;i<arr.size();i++){
            v1[i]=mp[arr[i]];
        }
        return v1;
    }
};