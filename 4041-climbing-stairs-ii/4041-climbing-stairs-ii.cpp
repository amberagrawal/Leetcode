class Solution {
public:
    int climbStairs(int n, vector<int>& nums) {
        vector<int>dp(n,1e9);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            if(i+1<=n-1){
                dp[i]=min(dp[i],(i+1+1-(i+1))*(i+1+1-(i+1))+nums[i+1]+dp[i+1]);
            }
            if(i+2<=n-1){
                dp[i]=min(dp[i],(i+2+1-(i+1))*(i+2+1-(i+1))+nums[i+2]+dp[i+2]);
            }
            if(i+3<=n-1){
                dp[i]=min(dp[i],(i+3+1-(i+1))*(i+3+1-(i+1))+nums[i+3]+dp[i+3]);
            }
        }
        int mini=dp[0]+nums[0]+1;
        if(1<n){
            mini=min(mini,dp[1]+nums[1]+4);
        }
        if(2<n){
            mini=min(mini,dp[2]+nums[2]+9);
        }
        return mini;
    }
};