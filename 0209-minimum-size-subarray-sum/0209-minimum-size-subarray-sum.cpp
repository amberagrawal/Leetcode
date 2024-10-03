class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        if(k==0||k>sum){
            return 0; 
        }
        int mini=INT_MAX;
        int total=0;
        int i=0;
        int j=0;
        while(i<nums.size()){
            total=total+nums[i];
            while(total>=k){
                mini=min(mini,i-j+1);
                total=total-nums[j];
                j++;
            }
            i++;
        }
        if(mini==INT_MAX){
            return 0;
        }
        return mini;
    }
};