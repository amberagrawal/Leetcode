class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int mini=-target;
        if(target==0){
            mini=INT_MAX;
        }
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int p=j+1;p<nums.size();p++){
                 int a=nums[i]+nums[j]+nums[p];
                 if(abs(target-a)<abs(target-mini)){
                    mini=a;
                 }   
                }
            }
        }
        return mini;
    }
};