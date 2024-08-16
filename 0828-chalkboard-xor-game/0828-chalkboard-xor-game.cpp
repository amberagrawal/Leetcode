class Solution {
public:
    bool xorGame(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a=0;
        for(int i=0;i<nums.size();i++){
            a=a^nums[i];
        }
        if(a==0||nums.size()%2==0){
            return true;
        }
        return false;
    }
};