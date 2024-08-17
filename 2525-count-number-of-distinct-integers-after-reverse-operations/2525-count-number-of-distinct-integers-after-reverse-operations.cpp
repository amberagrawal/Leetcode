class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];
            int b=0;
            while(a>0){
             b=b*10+a%10;
             a=a/10;
            }
            nums.push_back(b);
        }
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]!=nums[i-1]){
                count++;
            }
        }
        return count;
    }
};