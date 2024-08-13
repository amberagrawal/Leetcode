class Solution {
public:
    int maximumXOR(vector<int>& nums) {
      ios::sync_with_stdio(false);
        cin.tie(nullptr);  
      int ans=0;
      for(int i=0;i<nums.size();i++){
        ans=ans|nums[i];
      }  
      return ans;
    }
};