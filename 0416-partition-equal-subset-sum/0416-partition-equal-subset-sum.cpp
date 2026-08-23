class Solution {
public:
    int f(int i,int t,vector<int>&nums,vector<vector<int>>&dp){
        if(t==0){
            return true;
        }
        if(i<0){
            return false;
        }
        if(dp[i][t]!=-1){
            return dp[i][t];
        }
        bool a=f(i-1,t,nums,dp);
        bool b=false;
        if(nums[i]<=t){
            b=f(i-1,t-nums[i],nums,dp);
        } 
        return dp[i][t]=a|b;
    }
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int t=sum/2;
        if(sum%2!=0){
            return false;
        }
        vector<vector<int>>dp(nums.size(),vector<int>(t+1,-1));
        return f(nums.size()-1,t,nums,dp);
    }
};