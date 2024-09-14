class Solution {
public:
    int findLHS(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size();
        long long maxi=0;
        for(int i=0;i<nums.size();i++){
            for(int j=nums.size()-1;j>=0;j--){
                if(nums[j]-nums[i]==1){
                  if(j-i+1>maxi){
                    maxi=j-i+1;
                  }
                }
            }
        }
        return maxi;
    }
};