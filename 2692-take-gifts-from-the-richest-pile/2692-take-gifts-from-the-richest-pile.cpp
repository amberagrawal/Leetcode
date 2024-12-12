class Solution {
public:
    long long pickGifts(vector<int>& nums, int k) {
        long long total=0;
        for(int i=0;i<nums.size();i++){
            total=total+nums[i];
        }
        while(k--){
            sort(nums.rbegin(),nums.rend());
            int a=floor(sqrt(nums[0]));
            total=total-nums[0]+a;
            nums[0]=a;
        }
        return total;
    }
};