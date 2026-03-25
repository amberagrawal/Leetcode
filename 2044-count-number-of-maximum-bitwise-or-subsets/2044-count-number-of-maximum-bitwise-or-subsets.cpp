class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        map<int,int>dp;
        dp[0]=1;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            auto temp=dp;
            for(auto j:temp){
                int a=j.first;
                maxi=max(maxi,(a|nums[i]));
                dp[j.first|nums[i]]+=j.second;
            }
        }
        if(maxi==0){
            return dp[0]-1;
        }
        return dp[maxi];
    }
};