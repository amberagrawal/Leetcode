class Solution {
public:
    bool search(int s,int e,vector<int>&v){
        int l=0;
        int r=v.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid]>e){
                r=mid-1;
            }
            else if(v[mid]<s){
                l=mid+1;
            }
            else{
                return false;
            }
        }
        return true;
    }
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& q) {
        vector<int>v;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]%2==nums[i+1]%2){
                v.push_back(i);
            }
        }
        vector<bool>ans(q.size(),true);
        for(int i=0;i<q.size();i++){
            ans[i]=search(q[i][0],q[i][1]-1,v);
        }
        return ans;
    }
};