class Solution {
public:
    int f(int i,int a,vector<int>&nums,vector<vector<int>>&dp){
        if(a==0){
            return 1;
        }
        if(i<0){
            return 0;
        }
        if(dp[a][i]!=-1){
            return dp[a][i];
        }
        int x=0;
        int y=0;
        if(nums[i]<=a){
            x=f(i,a-nums[i],nums,dp);
        }
        y=f(i-1,a,nums,dp);
        return dp[a][i]=x+y;
    }
    int change(int a, vector<int>& nums) {
        vector<vector<int>>dp(a+1,vector<int>(nums.size(),-1));
        return f(nums.size()-1,a,nums,dp);
    }
};