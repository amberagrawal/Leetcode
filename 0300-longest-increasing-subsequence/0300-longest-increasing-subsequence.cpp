class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       vector<int>v;
       v.push_back(nums[0]);
       for(int i=1;i<nums.size();i++){
        sort(v.begin(),v.end());
        auto it=lower_bound(v.begin(),v.end(),nums[i]);
        if(it==v.end()){
            v.push_back(nums[i]);
        }
        else{
            *it=nums[i];
        }
       }
       return v.size();
    }
};