class Solution {
public:
    int countsub(vector<int>nums,int index,int ans,int target){
        if(index==nums.size()){
            if(ans==target){
                return 1;
            }
            else{
                return 0;
            }
        }
        int a=countsub(nums,index+1,ans,target);
        int b=countsub(nums,index+1,ans|nums[index],target);
        return a+b;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++){
            a=a|nums[i];
        }
        return countsub(nums,0,0,a);
    }
};