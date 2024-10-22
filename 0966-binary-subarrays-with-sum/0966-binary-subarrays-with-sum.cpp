class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        vector<int>v(nums.size(),0);
        v[0]=nums[0];
        for(int i=1;i<v.size();i++){
            v[i]=v[i-1]+nums[i];
        }
        map<int,int>mp;
        mp[0]=1;
        int count=0;
        for(int i=0;i<v.size();i++){
            int a=v[i]-goal;
            if(mp.find(a)!=mp.end()){
                count=count+mp[a];
            }
            mp[v[i]]++;
        }
        return count;
    }
};