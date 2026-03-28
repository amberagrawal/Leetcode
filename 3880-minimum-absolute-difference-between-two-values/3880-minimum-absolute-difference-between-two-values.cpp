class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int mini=1e9;
        int l=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                l=i;
            }
            else if(nums[i]==2){
                if(l!=-1){
                    mini=min(mini,i-l);
                }
            }
        }
        l=-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==1){
                l=i;
            }
            else if(nums[i]==2){
                if(l!=-1){
                    mini=min(mini,l-i);
                }
            }
        }
        if(mini==1e9){
            return -1;
        }
        return mini;
    }
};