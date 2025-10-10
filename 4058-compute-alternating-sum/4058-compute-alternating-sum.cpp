class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                a=a+nums[i];
            }
            else{
                a=a-nums[i];
            }
        }
        return a;
    }
};