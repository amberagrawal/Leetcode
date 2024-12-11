class Solution {
public:
    int search(vector<int>&nums,int i,int range){
        int l=i;
        int r=nums.size()-1;
        int count=1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]>range){
                r=mid-1;
            }
            else if(nums[mid]<=range){
                l=mid+1;
                count=mid;
            }
        }
        return count-i+1;
    }
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            int range=nums[i]+2*k;
            maxi=max(maxi,search(nums,i,range));
        }
        return maxi;
    }
};