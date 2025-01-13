class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int n) {
        int i=0;
        int r=nums.size();
        int c=nums[0].size();
        while(i<r){
            if(n>nums[i][c-1]){
                i++;
            }
            else{
                break;
            }
        }
        if(i<r){
        for(int j=0;j<c;j++){
            if(nums[i][j]==n){
                return true;
            }
        }
        }
        return false;
    }
};