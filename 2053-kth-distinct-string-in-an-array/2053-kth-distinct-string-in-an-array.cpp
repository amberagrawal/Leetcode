class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(int i=0;i<arr.size();i++){
            string s=arr[i];
            mp[s]++;
        }
        vector<string>v;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){
                v.push_back(arr[i]);
            }
        }
        if(k<=v.size()){
        return v[k-1];
        }
        return "";
    }
};