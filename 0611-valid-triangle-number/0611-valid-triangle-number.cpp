class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        if(nums.size()<3){
            return 0;
        }
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                int a=nums[i];
                int b=nums[j];
                int c=a+b;
                int idx=(lower_bound(nums.begin()+j+1,nums.end(),c)-nums.begin()-j-1);
                cnt+=idx;
            }
        }
        return cnt;
    }
};