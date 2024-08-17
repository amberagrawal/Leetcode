class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a=0;
        for(int i=0;i<nums.size();i++){
            a=max(a,nums[i]);
        }
        int maxi=0;
        int len=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==a){
                len++;
            }
            else{
              maxi=max(maxi,len);
              len=0;
            }
        }
        maxi=max(maxi,len);
        return maxi;
    }
};