class Solution {
public:
    int minCostToMoveChips(vector<int>& nums) {
        int even=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even++;
            }
        }
        int odd=nums.size()-even;
        return min(odd,even);
    }
};