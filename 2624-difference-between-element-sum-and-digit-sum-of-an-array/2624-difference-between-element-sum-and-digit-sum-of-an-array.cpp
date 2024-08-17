class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int total=0;
        int digit=0;
        for(int i=0;i<nums.size();i++){
            total=total+nums[i];
            int a=nums[i];
            while(a>0){
                digit=digit+a%10;
                a=a/10;
            }
        }
        return abs(digit-total);
    }
};