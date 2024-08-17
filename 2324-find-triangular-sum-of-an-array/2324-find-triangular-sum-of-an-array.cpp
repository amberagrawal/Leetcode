class Solution {
public:
    int triangularSum(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
      int len=nums.size();
      while(len>1){
       vector<int> newnums(len-1);
      for(int i=0;i<len-1;i++){
        newnums[i]=((nums[i]+nums[i+1])%10);
      }
      nums=newnums;
      len--;
      } 
      return nums[0];
    }
};