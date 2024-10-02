class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
       map<int,int>mp;
       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
       } 
       int a=0;
       for(auto i:mp){
        if(i.second==2){
            a=a^i.first;
        }
       }
       return a;
    }
};