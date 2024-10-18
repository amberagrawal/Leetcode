class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int>mp;
        int sum=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum++;
            }
            else{
                sum--;
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
            else{
                maxi=max(maxi,i-mp[sum]);
            }
            if(sum==0){
                    maxi=max(maxi,i+1);
                }
        }
        if(sum==0){
            return nums.size();
        }
        return maxi;
    }
};