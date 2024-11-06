class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int total=nums[0];
        vector<int>arr=nums;
        arr.erase(arr.begin());
        sort(arr.begin(),arr.end());
        total=total+arr[0]+arr[1];
        return total;
    }
};