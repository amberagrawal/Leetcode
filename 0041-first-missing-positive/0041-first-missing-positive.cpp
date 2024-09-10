class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      int n=nums.size();
      for(int i=0;i<n;i++){
        if(nums[i]<=0){
            nums[i]=n+1;
        }
      }
      map<int,int>mp;
      for(int i=0;i<n;i++){
        mp[nums[i]]++;
      }
      int j=1;
      for(auto i:mp){
        if(i.first!=j){
            return j;
        }
        else{
           j++;
        }
      }
      return j;
    }
};