class Solution {
public:
    int f(int i,vector<int>&dp,vector<int>&nums){
        if(i<0){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int a=f(i-1,dp,nums);
        int b=nums[i]+f(i-2,dp,nums);
        return dp[i]=max(a,b);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return f(n-1,dp,nums);
        
    }
};