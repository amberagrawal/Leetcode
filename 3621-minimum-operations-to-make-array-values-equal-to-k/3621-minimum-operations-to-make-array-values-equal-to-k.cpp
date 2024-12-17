class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if(k>nums[0]){
            return -1;
        }           
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int count=mp.size();
        if(nums[0]==k){
            count--;
        }
        return count;
    }
};