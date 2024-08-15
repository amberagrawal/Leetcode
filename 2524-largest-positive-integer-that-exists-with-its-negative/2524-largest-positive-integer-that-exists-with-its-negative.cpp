class Solution {
public:
    int findMaxK(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=0;j<nums.size();j++){
                if(nums[j]==-1*nums[i]){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};