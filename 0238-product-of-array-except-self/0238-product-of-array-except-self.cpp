class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v1(nums.size(),1);
        vector<int>v2(nums.size(),1);
        int prod=1;
        for(int i=0;i<nums.size();i++){
            v1[i]=prod;
            prod=prod*nums[i];
        }
        int prod1=1;
        for(int i=nums.size()-1;i>=0;i--){
            v2[i]=prod1;
            prod1=prod1*nums[i];
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(v1[i]*v2[i]);
        }
        return v;
    }
};