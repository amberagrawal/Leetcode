class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int maxi=INT_MAX;
        for(int p=l;p<=r;p++){
            int i=0;
            int j=p-1;
            int total=0;
            for(int z=0;z<=j;z++){
                total=total+nums[z];
            }
            if(total>0){
            maxi=min(maxi,total);
            }
            while(j<nums.size()-1){
                total=total-nums[i];
                total=total+nums[j+1];
                j++;
                i++;
                if(total>0){
                maxi=min(maxi,total);
                }
            }
        }
        if(maxi==INT_MAX){
            return -1;
        }
        return maxi;
    }
};