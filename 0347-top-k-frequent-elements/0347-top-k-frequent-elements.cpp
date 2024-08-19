class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
         mp[nums[i]]++;
        } 
        vector<pair<int,int>>v;
        for(auto i:mp){
            v.push_back(make_pair(i.second,i.first));
        }
        sort(v.rbegin(),v.rend());
        vector<int>ans;
        for(int i=0;i<v.size();i++){
            if(k>0){
                ans.push_back(v[i].second);
                k--;
            }
            else{
                break;
            }
        }
        return ans;
    }
};