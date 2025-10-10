class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        int maxi=*max_element(nums.begin(),nums.end());
        if(maxi==0){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
        }
        if(x>0){
            return nums.size();
        }
        else{
            return nums.size()-1;
        }
    }
};