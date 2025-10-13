class Solution {
public:
    vector<string> removeAnagrams(vector<string>& arr) {
        map<int,vector<int>>mp;
        for(int i=0;i<arr.size();i++){
            string s=arr[i];
            vector<int>v(26,0);
            for(int j=0;j<s.length();j++){
                v[s[j]-'a']++;
            }
            mp[i]=v;
        }
        vector<string>ans;
        for(int i=arr.size()-1;i>=1;i--){
            if(mp[i]==mp[i-1]){
                
            }
            else{
                ans.push_back(arr[i]);
            }
        }
        ans.push_back(arr[0]);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};