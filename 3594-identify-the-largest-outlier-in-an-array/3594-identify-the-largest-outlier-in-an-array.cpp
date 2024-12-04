class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total=total+nums[i];
        }
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if((total-nums[i])%2==0){
                int a=(total-nums[i])/2;
                if(mp[a]>0&&a!=nums[i]){
                    maxi=max(maxi,nums[i]);
                }
                else if(mp[a]>1&&a==nums[i]){
                    maxi=max(maxi,nums[i]);
                }
            }
        }
        return maxi;
    }
};