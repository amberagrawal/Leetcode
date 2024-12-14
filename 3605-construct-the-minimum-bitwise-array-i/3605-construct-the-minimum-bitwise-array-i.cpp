class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>v(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=2){
                int a=nums[i];
                int count=0;
                while(a>0){
                    if(a%2==1){
                        count++;
                    }
                    else{
                        break;
                    }
                    a=a/2;
                }
                v[i]=nums[i]-pow(2,count-1);
            }
        }
        return v;
    }
};