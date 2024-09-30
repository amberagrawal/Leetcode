class Solution {
public:
    int minElement(vector<int>& nums) {
       for(int i=0;i<nums.size();i++){
        int a=nums[i];
        int sum=0;
        while(a>0){
            sum=sum+(a%10);
            a=a/10;
        }
        nums[i]=sum;
       } 
       sort(nums.begin(),nums.end());
       return nums[0];
    }
};