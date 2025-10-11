class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=2;
        int i=0;
        int j=1;
        int k=2;
        int c=2;
        while(k<nums.size()){
            if(nums[k]==nums[i]+nums[j]){
               c++;
                i=j;
                j=k;
            }
            else{
                c=2;
                i=j;
                j=k;
            }
            k++;
            maxi=max(maxi,c);
        }
        return maxi;
    }
};