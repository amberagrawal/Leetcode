class Solution {
public:
    int maximumGap(vector<int>& nums) {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
      sort(nums.begin(),nums.end());
      int diff=0;
      for(int i=1;i<nums.size();i++) {
        diff=max(diff,nums[i]-nums[i-1]);
      } 
      return diff;
    }
};