class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int maxi=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=nums.size()-1;j>=i+1;j--){
                if(nums[i]<=nums[j]){
                    maxi=max(maxi,j-i);
                    break;
                }
            }
        }
        return maxi;
    }
};