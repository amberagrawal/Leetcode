class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<nums.size()&&nums[i]==nums[nums.size()-1]){
            i++;
        }
        while(i<j){
            int mid=i+(j-i)/2;
            if(nums[mid]>nums[j]){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
        if(i>=nums.size()){
            return nums[0];
        }
        return nums[i];
    }
};