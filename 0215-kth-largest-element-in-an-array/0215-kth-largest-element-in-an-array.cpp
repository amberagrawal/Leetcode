class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int count=0;
        int n=nums.size();
        for(auto i:mp){
            count=count+i.second;
            if(count>=n+1-k){
                return i.first;
            }
        }
        return -1;
    }
};