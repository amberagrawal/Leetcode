class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        sort(nums.begin(),nums.end());
        int p=1;
        for(int i=0;i<nums.size();i++){
          if(nums[i]==p){
            p=p*2;
          }
        }
        return p;
    }
};