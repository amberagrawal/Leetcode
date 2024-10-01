class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>v;
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0){
                v.push_back(i);
            }
        }
        return v;
    }
};