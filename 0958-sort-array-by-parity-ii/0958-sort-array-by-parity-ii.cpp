class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       vector<int>e;
       vector<int>o;
       for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
            e.push_back(nums[i]);
        }
        else{
            o.push_back(nums[i]);
        }
       } 
       int p=0;
       int q=0;
       for(int i=0;i<nums.size();i++){
        if(i%2==0){
            nums[i]=e[p];
            p++;
        }
        else{
            nums[i]=o[q];
            q++;
        }
       }
       return nums;
    }
};