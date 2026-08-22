class Solution {
public:
    int minimumTotal(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<int>dp=nums[n-1];
        for(int i=n-2;i>=0;i--){
            vector<int>v=nums[i];
            for(int j=0;j<nums[i].size();j++){
                v[j]=v[j]+min(dp[j],dp[j+1]);
            }
            dp=v;
        }
        return dp[0];
    }
};