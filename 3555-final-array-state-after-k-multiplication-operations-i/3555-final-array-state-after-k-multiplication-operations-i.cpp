class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int a) {
        while(k--){
            int x=nums[0];
            for(int i=0;i<nums.size();i++){
                x=min(x,nums[i]);
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i]==x){
                    nums[i]=nums[i]*a;
                    break;
                }
            }
        }
        return nums;
    }
};