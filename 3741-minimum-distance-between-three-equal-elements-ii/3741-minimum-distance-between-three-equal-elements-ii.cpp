class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        vector<int>pre(nums.size(),0);
        vector<int>suff(nums.size(),0);
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<nums.size();i++){
            if(!mp1.count(nums[i])){
                pre[i]=-1;
            }
            else{
                pre[i]=mp1[nums[i]];
            }
            mp1[nums[i]]=i;
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(!mp2.count(nums[i])){
                suff[i]=-1;
            }
            else{
                suff[i]=mp2[nums[i]];
            }
            mp2[nums[i]]=i;
        }
        int mini=1e9;
        for(int i=0;i<nums.size();i++){
            if(pre[i]!=-1&&suff[i]!=-1){
                mini=min(mini,abs(pre[i]-i)+abs(suff[i]-i)+abs(pre[i]-suff[i]));
            }
        }
        if(mini==1e9){
            return -1;
        }
        return mini;
    }
};