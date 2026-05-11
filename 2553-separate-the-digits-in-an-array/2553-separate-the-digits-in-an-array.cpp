class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            vector<int>v;
            int a=nums[i];
            while(a>0){
                v.push_back(a%10);
                a=a/10;
            }
            for(int j=v.size()-1;j>=0;j--){
                ans.push_back(v[j]);
            }
        }
        return ans;
    }
};