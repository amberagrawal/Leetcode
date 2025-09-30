class Solution {
public:
    long long splitArray(vector<int>& nums) {
        vector<bool>l(nums.size(),false);
        vector<bool>r(nums.size(),false);
        l[0]=true;
        r[nums.size()-1]=true;
        for(long long i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                l[i]=l[i-1];
            }
            else{
                l[i]=false;
            }
        }
        for(long long i=nums.size()-2;i>=0;i--){
            if(nums[i]>nums[i+1]){
                r[i]=r[i+1];
            }
            else{
                r[i]=false;
            }
        }
        vector<long long>pre(nums.size(),0);
        pre[0]=nums[0];
        for(long long i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        vector<long long>suff(nums.size(),0);
        suff[nums.size()-1]=nums[nums.size()-1];
        for(long long i=nums.size()-2;i>=0;i--){
            suff[i]=suff[i+1]+nums[i];
        }
        long long mini=LLONG_MAX;
        for(long long i=0;i<nums.size()-1;i++){
            if(l[i]&&r[i+1]){
                mini=min(mini,abs(pre[i]-suff[i+1]));
            }
        }
        if(mini==LLONG_MAX){
            mini=-1;
        }
        return mini;
    }
};