class Solution {
public:
    int smallestDivisor(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
      int l=1;
      int h=1e6;
      int mid;
      while(l<h){
        mid=l+(h-l)/2;
        int total=0;
        for(int i=0;i<nums.size();i++){
            total=total+(nums[i] + mid - 1) / mid;
        }
        if(total>k){
            l=mid+1;
        }
        else{
            h=mid;
        }
      }
      return l;
    }
};