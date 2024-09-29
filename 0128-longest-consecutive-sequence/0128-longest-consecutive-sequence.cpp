class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      ios::sync_with_stdio(false);
      cin.tie(nullptr);
       map<int,int>mp;
       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
       } 
       int count=0;
       int maxi=0;
       int prev=INT_MAX;
       for(auto i:mp){
        if(i.first-1==prev){
            count++;
        }
        else{
            maxi=max(maxi,count);
            count=1;
        }
        prev=i.first;
       }
        maxi=max(maxi,count);
       return maxi;
    }
};