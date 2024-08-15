class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n =nums.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        for(int i=1;i<n;i++){
            left[i]+=left[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            right[i]+=right[i+1]+nums[i+1];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=abs(left[i]-right[i]);
        }
        return ans;
    }
};