class Solution {
public:
    int minScoreTriangulation(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size(),0));
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=i+1;j<nums.size();j++){
                for(int k=i+1;k<j;k++){
                    if(dp[i][j]==0){
                        dp[i][j]=1e9;
                    }
                    dp[i][j]=min(dp[i][j],nums[i]*nums[j]*nums[k]+dp[i][k]+dp[k][j]);
                }
            }
        }
        return dp[0][nums.size()-1];
    }
};