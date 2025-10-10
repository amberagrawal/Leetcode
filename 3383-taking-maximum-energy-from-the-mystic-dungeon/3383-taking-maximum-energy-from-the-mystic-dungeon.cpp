class Solution {
public:
    int maximumEnergy(vector<int>& nums, int k) {
        vector<int>dp(nums.size(),-1e9);
        for(int i=nums.size()-1;i>=0;i--){
            dp[i]=nums[i];
            if(i+k<nums.size()){
                dp[i]+=dp[i+k];
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};